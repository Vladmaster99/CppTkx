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

/*
 * postmenu  uses absolute X,y
 * postmenuw uses relative X,y Cordinates
 * both in example to show difference.
 */ 

void postmenu(int x,int y)
{".m" << post(x,y);
}

void postmenuw(int x,int y)
{
  //string xs,ys;
 //xs="+"+to_string(x);
 //ys="+"+to_string(y);
".m" << post(x+(int)winfo(rootx,"."),y+(int)winfo(rooty, "."));
}

int main(int, char *argv[])
{ const char* sa[3] ={"One","Two","Three"};
    try
	{init(argv[0]);

//	root = Tk()
//	ttk.Button(root, text="Hello World").grid()
	button(".b") -text("Hello C++/Tk!");
	grid(configure,".b") -column(1) -row(1);

	 menu(".m");
//for i in ('One', 'Two', 'Three'):
	 for( int i=0;i<3;i++)
		{std::cout << sa[i] << "\n";
//    menu.add_command(label=i)
		".m" << add(command) -menulabel(sa[i]);
		}
/* 
 * getting the system out of CppTK is not currently a function
 * the tk source has tkl_windowingsystemcmd 
 * has "windowingsytem" Set to aqua/win32/x11 depending on what the compiler is set to
 * so the following lines are not in the code 
//if (root.tk.call('tk', 'windowingsystem')=='aqua')
// cout << (string) Tk::eval("windowingsystemcmd()");
//if(Tk::cmd('tk', 'windowingsystem')=='aqua')
//	{
//    root.bind('<2>', lambda e: menu.post(e.x_root, e.y_root))
//    root.bind('<Control-1>', lambda e: menu.post(e.x_root, e.y_root))
//	}
//else:
 * James Perrett
 */

//    root.bind('<3>', lambda e: menu.post(e.x_root, e.y_root))
 	Tk::bind(".","<3>",postmenuw,event_x,event_y);
 	Tk::bind(".","<2>",postmenu,event_x,event_y);
//        root.mainloop()          
          runEventLoop();
    }
    catch (exception const &e)
     {
          cerr << "Error: " << e.what() << '\n';
     }
}

//Need to document popup menus .. None in current docs