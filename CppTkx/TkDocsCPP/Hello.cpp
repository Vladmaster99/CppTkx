/*
 * Examples from tkdocs for CPPTK
 * Thanks to Roseman and others
 * 
 * Program: Hello.cpp
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

int main(int, char *argv[])
{
    try
	{init(argv[0]);

//	root = Tk()
//	ttk.Button(root, text="Hello World").grid()
	button(".b") -text("Hello C++/Tk!");
	grid(configure,".b") -column(1) -row(1);

//        root.mainloop()          
          runEventLoop();
    }
    catch (exception const &e)
     {
          cerr << "Error: " << e.what() << '\n';
     }
}