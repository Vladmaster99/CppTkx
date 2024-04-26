/*
 * Examples from tkdocs for CPPTK
 * Thanks to Roseman and others
 * 
 * Program: StackOrder.cpp
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
 */

#include "cpptk.h"
#include <iostream>

//from tkinter import *
//from tkinter import ttk
using namespace Tk;

using namespace std;

void raiseme()
{raise(".l1"); 
 cout << "less is more"; 
 update();
}

void lowerme()
{lower(".l1"); 
 cout << "less is still more"; 
 update();
}

int main(int, char *argv[])
{
 string little="Little"; //,bigger;
    try
	{init(argv[0]);

//	root = Tk()
//	ttk.Button(root, text="Hello World").grid()
	button(".b") -text("Hello C++/Tk!");
	grid(configure,".b") -column(1) -row(1);
//little = ttk.Label(root, text="Little  ")
	label(".l1") -textvariable(little);
//bigger = ttk.Label(root, text='Much bigger label')
        label(".l2") -text("Much bigger Label");
//little.grid(column=0,row=0)
	grid(configure,".l1") -column(0) -row(0);
//bigger.grid(column=0,row=0)
	grid(configure,".l2") -column(0) -row(0);
//root.after(2000, lambda: little.lift())
	after(2000,raiseme);
	after(3000,lowerme);
	Tk::bind(".b","<Enter>",raiseme);



//        root.mainloop()          
          runEventLoop();
    }
    catch (exception const &e)
     {
          cerr << "Error: " << e.what() << '\n';
     }
}