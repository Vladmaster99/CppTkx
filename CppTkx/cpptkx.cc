//
// Copyright (C) 2019, VladMaster99
// Version 1.0.4
//
// Permission to copy, use, modify, sell and distribute this software
// is granted provided this copyright notice appears in all copies.
// This software is provided "as is" without express or implied
// warranty, and with no claim as to its suitability for any purpose.
//
// If CPPTKx.cc is used on a windows machine.
// Please let me Know compiler & Operating system you are using
// Post card to 
// VladMaster99
// Unit 18/22 Broad Street
// Marden S.Australia 5070
//
// Indenting used is Whitesmith compressed. 
// 
// Tested  See Ttkdiff.exe
// [X] Ttk::button 		.. But text does not update
// [X] Ttk::checkbutton
// [X] Ttk::entry
// [ ] Ttk::frame
// [ ] Ttk::image
// [X] Ttk::label
// [X] Ttk::labelframe
// [X] Ttk::menubutton
// [X] Ttk::panedwindow
// [X] Ttk::radiobutton
// [ ] Ttk::scale
// [X] Ttk::scrollbar
// [ ] Ttk::spinbox
// [ ] Ttk::
// [ ] Ttk::
// [ ] Ttk::
// Version 1.0.5
// [ ] Ttk::notebook
// [ ] Ttk::separator
// [ ] Ttk::sizegrip
// [ ] Ttk::style
// [ ] Ttk::theme
// [ ] Ttk::treeview
 
#include "cpptkx.h"
#include <iomanip>


using namespace Tk;
using namespace Tk::details;
using namespace Ttk;
using namespace Tk::details;
using namespace boost;
using namespace std;


// various Tk bits and pieces

// Themed Tk widgets
static string ttk;
void Ttk::useTtk(bool use) { ttk = use ? "ttk::"s : string{}; }
bool Ttk::useTtk() { return !ttk.empty(); }

// starter pieces (genuine Tk commands)

Expr Ttk::button(string const &name)
{
     return Expr(ttk + "button "s + name);
}

Expr Ttk::entry(string const &name)
{
     return Expr(ttk + "entry "s + name);
}

// Tkx::image in here //

Expr Ttk::image(string const &option, string const &tn, string const &name)
{
     string str("image ");
     str += option;
     if (tn.empty())
     {
          return Expr(str);
     }
     str += " "; str += tn;
     if (name.empty())
     {
          return Expr(str);
     }
     str += " ";
     if (option == "cget")
     {
          str += '-';
     }
     str += name;
     return Expr(ttk + str);
}

Expr Ttk::label(string const &name)
{
     return Expr(ttk + "label "s + name);
}

Expr Ttk::labelframe(string const &name)
{
     return Expr(ttk + "labelframe "s + name);
}

Expr Ttk::menubutton(string const &name)
{
     return Expr(ttk + "menubutton "s + name);
}

Expr Ttk::panedwindow(string const &name)
{
     return Expr(ttk + "panedwindow "s + name);
}

Expr Ttk::scale(string const &name)
{
     return Expr(ttk + "scale "s + name);
}
Expr Ttk::scrollbar(string const &name)
{
     return Expr(ttk + "scrollbar "s + name);
}
Expr Ttk::spinbox(string const &name)
{
     return Expr(ttk + "spinbox "s + name);
}

Expr Ttk::checkbutton(string const &name)
{
     return Expr(ttk + "checkbutton "s + name);
}

Expr Ttk::frame(string const &name)
{
     return Expr(ttk + "frame "s +name);
}

Expr Ttk::radiobutton(string const &name)
{
     return Expr(ttk + "radiobutton "s + name);
}


// widget commands
// options
// other options, requiring special syntax or compilation
// event attribute specifiers
// constants
// additional constants
// additional functions
// multipurpose tokens

/*



Tk::details::ImageToken::ImageToken() : BasicToken("image") {}

Expr Tk::details::ImageToken::operator()() const
{
     return Expr(" -image");
}

Expr Tk::details::ImageToken::operator()(string const &name) const
{
     string str(" -image ");
     str += name;
     return Expr(str);
}

ImageToken Tk::image;
*/