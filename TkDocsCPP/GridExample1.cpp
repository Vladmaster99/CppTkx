	/*
 * Examples from tkdocs for CPPTK
 * Thanks to Roseman and others
 * 
 * Program: Bindings.cpp
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
 * Sets up a label where some events are rewritten to the label
 * If you now how to do local functions (Lambdas) in cpptk 
 * please send me a postcard letting me know how. (on VS2015 11c++)
 */

#include "cpptk.h"
#include <iostream>

//from tkinter import *
//from tkinter import ttk
using namespace Tk;

using namespace std;


int main(int, char *argv[])
{
//P/ onevar = BooleanVar()
//P/ twovar = BooleanVar()
//P/ threevar = BooleanVar()
//P/ onevar.set(True)
//P/ twovar.set(False)
//P/ threevar.set(True)
bool onevar,twovar,threevar=true;
int var1=true;
int var3=true;
int var2=false;

    try
	{init(argv[0]);
//	root = Tk()
//P/ content = ttk.Frame(root)
	 frame(".f1");
//P/ frame = ttk.Frame(content, borderwidth=5, relief="sunken", width=200, height=100)
	 frame(".f2") -borderwidth(5) -relief(sunken) -width(200) -height(100);
//P/ namelbl = ttk.Label(content, text="Name")
	 label(".l") -text("name");
//P/ name = ttk.Entry(content)
	 entry(".e");

//P/ one = ttk.Checkbutton(content, text="One", variable=onevar, onvalue=True)
	 checkbutton(".cb1") -text("one") -variable(var1) -onvalue(true);
//P/ two = ttk.Checkbutton(content, text="Two", variable=twovar, onvalue=True)
	 checkbutton(".cb2") -text("two") -variable(var2) -onvalue(true);
//P/ three = ttk.Checkbutton(content, text="Three", variable=threevar, onvalue=True)
	 checkbutton(".cb3") -text("three") -variable(var3) -onvalue(true);
//P/ ok = ttk.Button(content, text="Okay")
	 button(".ok") -text("Okay");
//P/ cancel = ttk.Button(content, text="Cancel")
	 button(".can") -text("Cancel");

//P/ content.grid(column=0, row=0)
	 grid(configure,".f1") -column(0) -row(0);
//P/ frame.grid(column=0, row=0, columnspan=3, rowspan=2)
	 grid(configure,".f2") -column(0) -row(0) -columnspan(3) -rowspan(2) ;
//P/ namelbl.grid(column=3, row=0, columnspan=2)
	 grid(configure,".l") -column(3) -row(0) -columnspan(2);
//P/ name.grid(column=3, row=1, columnspan=2)
	 grid(configure,".e") -column(3) -row(1) -columnspan(2);
//P/ one.grid(column=0, row=3)
	 grid(configure,".cb1") -column(0) -row(3);
//P/ two.grid(column=1, row=3)
	 grid(configure, ".cb2") -column(1) -row(3);
//P/ three.grid(column=2, row=3)
	 grid(configure, ".cb3") -column(2) -row(3);
//P/ ok.grid(column=3, row=3)
	 grid(configure ,".ok") -column(3) -row(3);
//P/ cancel.grid(column=4, row=3)
	 grid(configure, ".can") -column(4) -row(3);


//        root.mainloop()          
          runEventLoop();
    }
    catch (exception const &e)
     {
          cerr << "Error: " << e.what() << '\n';
     }
}