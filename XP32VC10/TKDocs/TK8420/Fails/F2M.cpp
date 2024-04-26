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

// Following are globals stings used buy Enty input , label outputs and Calculate function
 //P/ feet = StringVar()
 //P/ meters = StringVar()
string meters="0";
string feet="0";


//P/ def calculate(*args):
void calculate()
{float value,meter;
//P/     try:
//  try Removed try block no need for it in this routine currently not returning value. Gui first.
	{
//P/         value = float(feet.get())
	 value =stof(feet);
//P/         meters.set((0.3048 * value * 10000.0 + 0.5)/10000.0)
	 meter=(0.3048 * value * 1000.0 +0.5)/1000.0; 
	 cout << meter;
	 meters=to_string(meter);
//P/     except ValueError:
//	 throw exception;
//P/        pass
	}
//    catch() 
	{
//	 cout << "whats to catch??
	}
}

int main(int, char *argv[])
{

    try
	{init(argv[0]);



//	root = Tk()
//P/ root.title("Feet to Meters")
	wm(title, ".", "Feet to meters");
//P/ mainframe = ttk.Frame(root, padding="3 3 12 12")
	frame(".f") -padx(3) -pady(12); //- padding("3 3 12 12") part of Tkx
//P/ mainframe.grid(column=0, row=0, sticky=(N, W, E, S))
	 grid(configure,".f") -column(0) -row(0) -sticky("nwes");
//P/ root.columnconfigure(0, weight=1)
	 grid(columnconfigure,".",0) -weight(1);
//P/ root.rowconfigure(0, weight=1)
	 grid(rowconfigure,".",0) -weight(1);

//P/ feet_entry = ttk.Entry(mainframe, width=7, textvariable=feet)
	 entry(".e") -width(7) -textvariable(feet);
//P/ feet_entry.grid(column=2, row=1, sticky=(W, E))
	 grid(configure,".e") -column(2) -row(1) -sticky("we");

//P/ ttk.Label(mainframe, textvariable=meters).grid(column=2, row=2, sticky=(W, E))
	 label(".l") -textvariable(meters);
	 grid(configure,".l") -column(2) -row(2) -sticky("we");
//P/ ttk.Button(mainframe, text="Calculate", command=calculate).grid(column=3, row=3, sticky=W)
	 button(".b1") -text("Calculate") -command(calculate);
	 grid(configure,".b1") -column(3) -row(3) -sticky("w");
//P/ ttk.Label(mainframe, text="feet").grid(column=3, row=1, sticky=W)
	 label(".l2") -text("feet");
	 grid(configure,".l2") -column(3) -row(1) -sticky("w");
//P/ ttk.Label(mainframe, text="is equivalent to").grid(column=1, row=2, sticky=E)
	 label(".l3") -text("is eqivalent to");
	 grid(configure,".l3") -column(1) -row(2) -sticky("e");
//P/ ttk.Label(mainframe, text="meters").grid(column=3, row=2, sticky=W)
	 label(".l4") -text("meters");
	 grid(configure,".l4") -column(3) -row(2) -sticky("w");
//P/ for child in mainframe.winfo_children(): child.grid_configure(padx=5, pady=5)
	 grid(configure,winfo(children,".")) -padx(5) -pady(5);

//P/ feet_entry.focus()
	 focus(".e");
//P/ root.bind('<Return>', calculate)
	 Tk::bind(".","<Return>",calculate);
	  
	  
//        root.mainloop()          
          runEventLoop();
    }
    catch (exception const &e)
     {
          cerr << "Error: " << e.what() << '\n';
     }
}