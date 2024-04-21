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

void retext1()
{s="enter";
 ".l" << configure() -text(s);
}

void retext2()
{s="Leave";
 ".l" << configure() -text(s);
}

void retext3()
{s="LeftClick";
 ".l" << configure() -text(s);
}


void retext4()
{s="DoubleLeft";
".l" << configure() -text(s);
}

void retext5(int x, int y)
{string s;
 s=to_string(x)+"-"+to_string(y);
 ".l" << configure() -text(s);
}

int main(int, char *argv[])
{
    try
	{init(argv[0]);
//	root = Tk()
//l =ttl:Label(root, text="Starting...")
	label(".l") -text("Starting...");
//l.grid()
	grid(configure,".l") -column(1) -row(2);
//l.bind('<enter>', lambda e: l.configure(text='Moved mouse inside'))
//	retext1();
	Tk::bind(".l", "<Enter>",retext1);
//l.bind('<Leave>', lambda e: l.configure(text='Moved mouse outside'))
//	retext("leave");
	Tk::bind(".l", "<Leave>",retext2);
//l.bind('<1>', lambda e: l.configure(text='Clicked left mouse button'))
	Tk::bind(".l", "<1>",retext3);
//l.bind('<Double-1>', lambda e: l.configure(text='Double clicked'))
	Tk::bind(".l", "<Double-1>",retext4);
//l.bind('<B3-Motion>', lambda e: l.configure(text='right button drag to %d,%d' % (e.x, e.y)))	
	Tk::bind(".l", "<B3-Motion>",retext5,event_x,event_y);

//        root.mainloop()          
          runEventLoop();
    }
    catch (exception const &e)
     {
          cerr << "Error: " << e.what() << '\n';
     }
}