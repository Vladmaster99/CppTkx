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
 *
 * Simple one colour (Black) Sketch program Pencil only
 */

#include "cpptk.h"
#include <iostream>

//from tkinter import *
//from tkinter import ttk
using namespace Tk;
using namespace std;

//lastx, lasty = 0, 0
int lastx,lasty =0;

void addLine(int x,int y)
{//  global lastx, lasty
//	
//    canvas.create_line((lastx, lasty, event.x, event.y))
 ".c" << create(line, lastx, lasty, x ,y  ); 
//    lastx, lasty = event.x, event.y
 lastx=x;
 lasty=y;
}

//def xy(event):
void xy(int x,int y)
{// global lastx, lasty
 string s;
 s=to_string(x)+"-"+to_string(y);
 ".b" << configure() -text(s);
//    lastx, lasty = event.x, event.y 
 lastx=x;
 lasty=y;
}

int main(int, char *argv[])
{   try
	{init(argv[0]);

//	root = Tk()
//	ttk.Button(root, text="Hello World").grid()
	button(".b") -text("Hello C++/Tk!");
	grid(configure,".b") -column(1) -row(1);

//root.columnconfigure(0, weight=1)
//root.rowconfigure(0, weight=1)
//canvas = Canvas(root)
	canvas(".c") -insertbackground("blue") -insertborderwidth(3);
//canvas.grid(column=0, row=0, sticky=(N, W, E, S))
	grid(configure,".c") -column(1) -row(2) -sticky("nwes");
	grid(columnconfigure,".c",1) -weight(1);
	grid(rowconfigure,".c",2) -weight(1);
//canvas.bind("<Button-1>", xy)
	Tk::bind(".c","<Button-1>",xy,event_x,event_y);
//canvas.bind("<B1-Motion>", addLine)
	Tk::bind(".c","<B1-Motion>",addLine,event_x,event_y);


//        root.mainloop()          
          runEventLoop();
    }
    catch (exception const &e)
     {
          cerr << "Error: " << e.what() << '\n';
     }
}