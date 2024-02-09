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
	
//l = Listbox(root, height=5)
	listbox(".lb") -height(5) -yscrollcommand(".sb set");
//l.grid(column=0, row=0, sticky=(N,W,E,S))
	grid(configure,".lb") -column(0) -row(0) -sticky("nwes");
//l['yscrollcommand'] = s.set	// Added above
//s = ttk.Scrollbar(root, orient=VERTICAL, command=l.yview)
	scrollbar(".sb") -command(std::string(".lb yview")); ; 
//s.grid(column=1, row=0, sticky=(N,S))
	grid(configure,".sb") -column(1) -row(0) -sticky("ns");


//.-yscrollcommand(".sb set");
//.-xscrollcommand("xcmd") -yscrollcommand("ycmd");

//ttk.Sizegrip().grid(column=1, row=1, sticky=(S,E)) No longer a good idea so removed

//root.grid_columnconfigure(0, weight=1)
	grid(columnconfigure,".",0) -weight(1);
//root.grid_rowconfigure(0, weight=1)
	grid(rowconfigure,".",0) -weight(1);

//for i in range(1,101):
	for ( int i=0;i<101 ;i++)
//    l.insert('end', 'Line %d of 10' % i)
		{string myout;
		 myout="line"+to_string(i)+"of 100\n";
		 ".lb" << insert(Tk::end,myout);
		 cout << myout;
		} 
//        root.mainloop()          
          runEventLoop();
    }
    catch (exception const &e)
     {
          cerr << "Error: " << e.what() << '\n';
     }
}

