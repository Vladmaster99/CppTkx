/*
 * Examples from tkdocs for CPPTK
 * Thanks to Roseman and others
 * 
 * Program: WindowPaneBindings.cpp
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
 * Sets up a set of panedwindows.
 * If you know how to do local functions (Lambdas) in cpptk 
 * please send me a postcard letting me know how. (on VS2015 11c++)
 */

#include "cpptk.h"
#include "cpptkx.h"
#include <iostream>

//from tkinter import *
//from tkinter import ttk
using namespace Tk;
using namespace Ttk;
using namespace std;


int main(int, char *argv[])
{
string P1,P2;
    try
	{init(argv[0]);
//	root = Tk()
//P/ content = ttk.Frame(root)
	 Tk::frame(".f1");
//P/ p = ttk.Panedwindow(parent, orient=VERTICAL)
	 Ttk::panedwindow(".f1") -orient("Vertical");
//P/ f1 = ttk.labelframe(p,text='pane1', width=100, height=100)
	 Ttk::labelframe(".f1"); 
	// -text("Pane1") -width(100) -height(100));
//P/ f1 = ttk.labelframe(p,text='pane2', width=100, height=100)
	 Ttk::labelframe(".f1");
	//  -text("Pane2") -width(100) -height(100));
	".f" << add(P1);
	".f" << add(P2);
//        root.mainloop()          
          runEventLoop();
	}
    
catch (exception const &e)
     {
          cerr << "Error: " << e.what() << '\n';
     }
}