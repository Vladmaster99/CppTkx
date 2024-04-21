/*
 * Examples from tkdocs for CPPTK
 * Thanks to Roseman and others
 * 
 * Program: Sketch1.cpp
 * Author : VladMaster99
 * Date   : 1/1/2020
 * 
 * Tested on Windows xp, Windows 7 , Window Ten
 * Tested on TCL/TK 8.4.20 , 8.5.19 , 8.6
 * Compiled on VS2003 , VS2015 
 * Gave up on borland C++ Compilers
 *
 * Read.md has a test Matrix. 
 * Screen shots Tk on XP vs TKx on win 10
 * //P/ is the python equivalent of the next line
 * Simple three colour (RGB) Sketch program Pencil only
 *
 * tag(bind) fails for tk8.6 On Win7 try 8.4 on Xp
 */

#include "cpptk.h"
#include <iostream>

//P/from tkinter import *
//P/from tkinter import ttk
using namespace std;
using namespace Tk; 
//P/ Cannot use using namespace std; due to std::fill
using std::cerr;
using std::string;
using std::to_string;

//P/lastx, lasty = 0, 0
int lastx,lasty =0;
//P/color = "black"
string colour = "black";

void addLine(int x,int y)
{//P/  global lastx, lasty
//P/	
//P/    canvas.create_line((lastx, lasty, event.x, event.y))
 string l(".c" << create(line, lastx, lasty, x ,y ));
 ".c" <<itemconfigure(l) -Tk::fill(colour);
//P/    lastx, lasty = event.x, event.y
 lastx=x;
 lasty=y;
}

void blue()
{colour="blue";
}

void green()
{colour="green";
}

void red()
{colour="red";
}

//P/ def setColor(newcolor):
void setColour(string newColour)
{//P/ global color
 colour = newColour;
}

//P/ def xy(event):
void xy(int x,int y)
{//P/ global lastx, lasty
 string s;
 s=to_string(x)+"-"+to_string(y)+"-"+colour;
 ".b" << configure() -text(s);
//P/   lastx, lasty = event.x, event.y 
 lastx=x;
 lasty=y;
}

int main(int, char *argv[])
{try
	{init(argv[0]);
	
//P/ root = Tk()
//P/ ttk.Button(root, text="Hello World").grid()
	 button(".b") -text("Hello C++/Tk!");
	 grid(configure,".b") -column(1) -row(1);

//P/ root.columnconfigure(0, weight=1)
//P/ root.rowconfigure(0, weight=1)
//P/ canvas = Canvas(root)
	 canvas(".c") -insertbackground("blue") -insertborderwidth(3);
//P/ canvas.grid(column=0, row=0, sticky=(N, W, E, S))
	 grid(configure,".c") -column(1) -row(2) -sticky("nwes");
	 grid(columnconfigure,".c",1) -weight(1);
	 grid(rowconfigure,".c",2) -weight(1);
//P/ canvas.bind("<Button-1>", xy)
	 Tk::bind(".c","<Button-1>",xy,event_x,event_y);
//P/ canvas.bind("<B1-Motion>", addLine)
	 Tk::bind(".c","<B1-Motion>",addLine,event_x,event_y);
//P/ id = canvas.create_rectangle((10, 10, 30, 30), fill="red")
	 string id(".c" << create(rectangle,10,10,30,30));
	// Fails  ".c" << Tk::addtag("redc", id);
	 ".c" << Tk::addtag("redc", enclosed, 10,10,30,30);
	 ".c" << itemconfigure(id) -outline("red") -Tk::fill("red");
//P/ canvas.tag_bind(id, "<Button-1>", lambda x: setColor("red"))
// To try
	 // crashes shstem	".c" << tag(Tk::bind, "redc" , "<Button-3>", red);
	 // Crashes system 	".c" << tag(Tk::bind, id , "<Button-3>", red);
	 // Does not do anything ".c" << Tk::bind("redc", "<Button-3>", red);
	 // Works  
	 ".c" << Tk::bind(id, "<Button-3>", red);
	 cout << id;
//P/ id = canvas.create_rectangle((10, 35, 30, 55), fill="blue")
	 string id2(".c" << create(rectangle,10,35,30,55));
	 ".c" << itemconfigure(id2) -outline("blue") -Tk::fill("blue");
	  ".c" << Tk::bind(id2, "<Button-3>", blue);
	 cout << id2;
//P/ canvas.tag_bind(id, "<Button-1>", lambda x: setColor("blue"))
	Tk::bind(id2, "<Button-3>", blue);
//P/ id = canvas.create_rectangle((10, 35, 30, 55), fill="blue")
	 string id3(".c" << create(rectangle,10,60,30,80));
	 ".c" << itemconfigure(id3) -outline("black") -Tk::fill("green");
	 ".c" << Tk::addtag("greenc", enclosed, 10,60,30,80);
	//Fails here ".c"<< Tk::bind("greenc", "<Button-2>" , green);
	 ".c" << Tk::bind(id3,"<Button-3>", green);
	  cout << id3;
 //P/ canvas.tag_bind(id, "<Button-1>", lambda x: setColor("green"))
	 string id4(".c" << create(line,0,0,100,100));
	 ".c" << itemconfigure(id4) -Tk::fill("green");
//P/        root.mainloop()          
          runEventLoop();
    }
    catch (exception const &e)
     {
          cerr << "Error: " << e.what() << '\n';
     }
}