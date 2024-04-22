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

class cInfo
{
 public:
 cInfo(const string &c, const string &n, const unsigned p,const bool b) : code(c), name(n), population(p), home(b) {}
 string code;
 string name;
 unsigned population;
 bool home;
};

 std::vector<cInfo> countries[20];

// State variables
//P/ gift = StringVar()
string gift="flowers";
//P/ sentmsg = StringVar()
string sentmsg="Lets anger";
//P/ statusmsg = StringVar()
string statusmsg="No nuclear retaileation";
string census="The population of";
string censusmsg="";

/*
 * Called when the selection in the listbox changes; figure out
 * which country is currently selected, and then lookup its country
 * code, and from that, its population.  Update the status message
 * with the new population.  As well, clear the message about the
 * gift being sent, so it doesn't stick around after we start doing
 * other things.
 */

//P/ def showPopulation(*args):
void ShowPopulation()
{int idx;
 class cInfo
	{
		public:
		cInfo(const std::string &c, const std::string &n, const unsigned p, const bool b) : code(c), name(n), population(p), home(b) {}
		std::string code;
		std::string name;
		unsigned population;
		bool home;
	};
 std::vector<cInfo> countries;
//P/     idxs = lbox.curselection()
 string idxs(".f.lb" << curselection());
 cout << idxs;
//P/     if len(idxs)==1:  always one number 1..16
//P/         idx = int(idxs[0])
 idx = stoi(idxs);
//P/         code = countrycodes[idx]
 const cInfo &country =countries[idx];
 
//initializing': cannot convert from 'std::vector<cInfo,std::allocator<_Ty>>' to 'const cInfo &'	
 cout << country.code;
//P/         name = countrynames[idx]
 cout << country.name; 
//P/         popn = populations[code]
//P/         statusmsg.set("The population of %s (%s) is %d" % (name, code, popn))
// censusmsg= census + country.name + " (" + coutry.code +" ) is ";
//P/     sentmsg.set('') 
 
}


int main(int, char *argv[])
{
    try
	{init(argv[0]);
//	root = Tk()
/*
 * Initialize our country "databases":
 *  - the list of country codes (a subset anyway)
 *  - a parallel list of country names, in the same order as the country codes
 *  - a hash table mapping country code to population<
 */
//P/ countrycodes = ('ar', 'au', 'be', 'br', 'ca', 'cn', 'dk', 'fi', 'fr', 'gr', 'in', 'it', 'jp', 'mx', 'nl', 'no', 'es', 'se', 'ch')
//P/ countrynames = ('Argentina', 'Australia', 'Belgium', 'Brazil', 'Canada', 'China', 'Denmark', \
//P/         'Finland', 'France', 'Greece', 'India', 'Italy', 'Japan', 'Mexico', 'Netherlands', 'Norway', 'Spain', \
//P/         'Sweden', 'Switzerland')
//P/ cnames = StringVar(value=countrynames)
//P/ populations = {'ar':41000000, 'au':21179211, 'be':10584534, 'br':185971537, \
//P/         'ca':33148682, 'cn':1323128240, 'dk':5457415, 'fi':5302000, 'fr':64102140, 'gr':11147000, \
//P/         'in':1131043000, 'it':59206382, 'jp':127718000, 'mx':106535000, 'nl':16402414, \
//P/         'no':4738085, 'es':45116894, 'se':9174082, 'ch':7508700}
class cInfo
	{
		public:
		cInfo(const std::string &c, const std::string &n, const unsigned p, const bool b) : code(c), name(n), population(p), home(b) {}
		std::string code;
		std::string name;
		unsigned population;
		bool home;
	};

 std::vector<cInfo> countries;
 countries.push_back(cInfo("ar","Argentina",41000000,0));
 countries.push_back(cInfo("au","Australia",21179211,1));
 countries.push_back(cInfo("be","Belgium",10584534,0));
 countries.push_back(cInfo("br","Brazil",185971537,0));
 countries.push_back(cInfo("ca","Canada",33148682,0));
 countries.push_back(cInfo("cn","China",1323128240,0));
 countries.push_back(cInfo("dk","Denmark",5457415,0));
 countries.push_back(cInfo("fi","Finland",5302000,0));
 countries.push_back(cInfo("fr","France",64102140,0));
 countries.push_back(cInfo("gr","Greece",11147000,0));
 countries.push_back(cInfo("in","India",1131043000,0));
 countries.push_back(cInfo("it","Italy",59206382,0));
 countries.push_back(cInfo("jp","Japan",127718000,0));
 countries.push_back(cInfo("mx","Mexico",106535000,0));
 countries.push_back(cInfo("nl","Netherlands",16402414,0));
 countries.push_back(cInfo("no","Norway",4738085,0));
 countries.push_back(cInfo("es","Spain",45116894,0));
 countries.push_back(cInfo("se","Sweden",9174082,0));
 countries.push_back(cInfo("ch","Switzerland",7508700,0));

// Names of the gifts we can send
//P/ gifts = { 'card':'Greeting card', 'flowers':'Flowers', 'nastygram':'Nastygram'}

/* Called when the user double clicks an item in the listbox, presses
 * the "Send Gift" button, or presses the Return key.  In case the selected
 * item is scrolled out of view, make sure it is visible. 
 *
 * Figure out which country is selected, which gift is selected with the 
 * radiobuttons, "send the gift", and provide feedback that it was sent.
 */
//P/ def sendGift(*args):
//P/     idxs = lbox.curselection()
//P/     if len(idxs)==1:
//P/         idx = int(idxs[0])
//P/         lbox.see(idx)
//P/         name = countrynames[idx]
//P/         # Gift sending left as an exercise to the reader
//P/         sentmsg.set("Sent %s to leader of %s" % (gifts[gift.get()], name))

// Create and grid the outer content frame
//P/ c = ttk.Frame(root, padding=(5, 5, 12, 0))
 frame(".f"); //Ttk padding
//P/ c.grid(column=0, row=0, sticky=(N,W,E,S))
 grid(configure,".f") -column(0) -row(0) -sticky("news");
//P/ root.grid_columnconfigure(0, weight=1)
 grid(columnconfigure,".",0) -weight(1);
//P/ root.grid_rowconfigure(0,weight=1)
 grid(rowconfigure,".",0) -weight(1);

/*
 * Create the different widgets; note the variables that many
 * of them are bound to, as well as the button callback.
 * Note we're using the StringVar() 'cnames', constructed from 'countrynames'
 */
//P/ lbox = Listbox(c, listvariable=cnames, height=5)
 string lbox(listbox(".f.lb"));
 for(auto i=countries.begin(),e=countries.end();i!=e;++i)
	{
		".f.lb" << insert(Tk::end,i->name);
	}
//P/ lbl = ttk.Label(c, text="Send to country's leader:")
 label(".f.l1") -text("send to Country's Leader:");
//P/ g1 = ttk.Radiobutton(c, text=gifts['card'], variable=gift, value='card')//
 radiobutton(".f.rb1") -text("Greeting card") -variable(gift) -value("card");
//P/ g2 = ttk.Radiobutton(c, text=gifts['flowers'], variable=gift, value='flowers')
 radiobutton(".f.rb2") -text("Flowers") -variable(gift) -value("flowers");
//P/ g3 = ttk.Radiobutton(c, text=gifts['nastygram'], variable=gift, value='nastygram')
 radiobutton(".f.rb3") -text("nastrygram") -variable(gift) -value("nastygram");
//P/ send = ttk.Button(c, text='Send Gift', command=sendGift, default='active')
 button(".f.b1") -text("Send Gift");
//P/ sentlbl = ttk.Label(c, textvariable=sentmsg, anchor='center')
 label(".f.l2") -textvariable(sentmsg);
//P/ status = ttk.Label(c, textvariable=statusmsg, anchor=W)
 label(".f.l3") -textvariable(statusmsg);
 label(".f.l4") -textvariable(censusmsg);
  
// Grid all the widgets
//P/ lbox.grid(column=0, row=0, rowspan=6, sticky=(N,S,E,W))
 grid(configure,".f.lb") -column(0) -row(0) -rowspan(6) -sticky("news");
//P/ lbl.grid(column=1, row=0, padx=10, pady=5)
 grid(configure,".f.l1") -column(1) -row(0) -padx(10) -pady(5);
//P/ g1.grid(column=1, row=1, sticky=W, padx=20)
 grid(configure,".f.rb1") -column(1) -row(1) -sticky("w") -padx(20);
//P/ g2.grid(column=1, row=2, sticky=W, padx=20)
 grid(configure,".f.rb2") -column(1) -row(2) -sticky("w") -padx(20);
//P/ g3.grid(column=1, row=3, sticky=W, padx=20)
 grid(configure,".f.rb3") -column(1) -row(3) -sticky("w") -padx(20);
//P/ send.grid(column=2, row=4, sticky=E)
 grid(configure,".f.b1") -column(2) -row(4) -sticky("e");
//P/ sentlbl.grid(column=1, row=5, columnspan=2, sticky=N, pady=5, padx=5)
 grid(configure,".f.l2") -column(1) -row(5) -sticky("n") -padx(5) -pady(5);
//P/ status.grid(column=0, row=6, columnspan=2, sticky=(W,E))
 grid(configure,".f.l3") -column(1) -row(6) -sticky("we");
 grid(configure,".f.l4") -column(0) -row(6) -columnspan(2) -sticky("we");
//P/ c.grid_columnconfigure(0, weight=1)
 grid(columnconfigure,".f",0) -weight(1);
//P/ c.grid_rowconfigure(5,weight=1)
 grid(rowconfigure,".f",5) -weight(1);

// Set event bindings for when the selection in the listbox changes,
// when the user double clicks the list, and when they hit the Return key

//P/ lbox.bind('<<ListboxSelect>>', showPopulation)
 Tk::bind(".f.lb","<<ListboxSelect>>",ShowPopulation);
 
//P/ lbox.bind('<Double-1>', sendGift)
//P/ root.bind('<Return>', sendGift)

// Colorize alternating lines of the listbox
//P/ for i in range(0,len(countrynames),2):
//P/     lbox.itemconfigure(i, background='#f0f0ff')

/* Set the starting state of the interface, including selecting the
 * default gift to send, and clearing the messages.  Select the first
 * country in the list; because the &lt;&lt;ListboxSelect&gt;&gt; event is only
 * generated when the user makes a change, we explicitly call showPopulation.
 */
//P/ gift.set('card')
//P/ sentmsg.set('')
//P/ statusmsg.set('')
//P/ lbox.selection_set(0)
//P/ showPopulation()

/*
#HIDE
#update idletasks; update
#$::lbox selection clear 0
#$::lbox selection set 4
#$::lbox yview scroll 2 units
#wm geometry . [expr [winfo width .]+15]x[expr [winfo height .]+20]
#showPopulation
#set gift nastygram
#sendGift
#/HIDE
*/

//        root.mainloop()          
          runEventLoop();
    }
    catch (exception const &e)
     {
          cerr << "Error: " << e.what() << '\n';
     }
}