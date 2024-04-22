/*
 * If you want to make sure you alway use Ttk widgets when avalible
 * Use this include header.
 * to only import Tk functions that do not have Ttk equivalents.
 * I.E. do not add Using Namespace TK
 *
 * Do not use Tk::button,Tk::entry, Tk::frame, Tk::Label, Tk::radiobutton
 *
 * if you want to use a specific Tk Widget remove // at start of line
 */

//using Tk::button;
//using Tk::checkbutton;
using Tk::column;
using Tk::columnconfigure;
using Tk::columnspan;
using Tk::configure; //not working
using Tk::curselection;
//using Tk::entry;
//using Tk::frame
using Tk::grid;
using Tk::init;
using Tk::insert;
//using Tk::label;
using Tk::listbox;
using Tk::operator-;
using Tk::operator<<;
using Tk::padx;
using Tk::pady;
//using Tk::radiobutton,
using Tk::row;
using Tk::rowconfigure;
using Tk::rowspan;
using Tk::runEventLoop;
using Tk::sticky;
using Tk::text;
using Tk::textvariable;
using Tk::value;
using Tk::variable;
using Tk::weight;
 
  
