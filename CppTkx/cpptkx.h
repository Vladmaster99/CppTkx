//
// Copyright (C) 2019, VladMaster99
// Version 1.03
//
// Permission to copy, use, modify, sell and distribute this software
// is granted provided this copyright notice appears in all copies.
// This software is provided "as is" without express or implied
// warranty, and with no claim as to its suitability for any purpose.
//

#include "base/cpptkbase.h"
;

using namespace std;

// various Ttk bits and pieces

// starter pieces (genuine Ttk commands)

namespace Ttk
{
void useTtk(bool use);
bool useTtk();

Tk::details::Expr button(string const &name);

Tk::details::Expr entry(string const &name);

Tk::details::Expr image(string const &option,
     string const &tn = string(),
     string const &name = string());

Tk::details::Expr label(string const &name);

Tk::details::Expr labelframe(string const &name);

Tk::details::Expr menubutton(string const &name);

Tk::details::Expr panedwindow(string const &name);

Tk::details::Expr scale(string const &name);

Tk::details::Expr scrollbar(string const &name);

Tk::details::Expr spinbox(string const &name);
 
Tk::details::Expr checkbutton(string const &name);

Tk::details::Expr frame(string const &name);

Tk::details::Expr radiobutton(string const &name);

namespace details
{

}

}
/*
namespace Tk
{

template <typename T1, typename T2>
details::Expr scale(std::string const &item,
     T1 const &xorig, T2 const &yorig, double xscale, double yscale)
{
     std::string str("scale ");
     str += item;     str += " ";
     str += details::toString(xorig); str += " ";
     str += details::toString(yorig); str += " ";
     str += details::toString(xscale); str += " ";
     str += details::toString(yscale);
     return details::Expr(str);
}

// options	

// other options, requiring special syntax or compilation

template <typename T1, typename T2, typename T3, typename T4>
details::Expr scrollregion(T1 const &x1, T2 const &y1,
     T3 const &x2, T4 const y2)
{
     std::string str(" -scrollregion ");
     str += details::toString(x1); str += " ";
     str += details::toString(y1); str += " ";
     str += details::toString(x2); str += " ";
     str += details::toString(y2);
     return details::Expr(str);
}

// event attribute specifiers

// constants

// additional constants for Ttk
-class
-padding
-style

// additional functions

// James James James Namespace next
// multi-purpose tokens
// these are tokens which are meant to be both commands
// and constants or options

namespace details

class FrameToken : public BasicToken
{
public:
     FrameToken();
     Expr operator()(std::string const &name) const;
};

class RadioButtonToken : public BasicToken
{
public:
     RadioButtonToken();
     Expr operator()(std::string const &name) const;
};

class ImageToken : public BasicToken
{
public:
     ImageToken();
     Expr operator()() const;
     Expr operator()(std::string const &name) const;
};

} // namespace Detials
extern details::CheckButtonToken checkbutton;
extern details::RadioButtonToken radiobutton;
extern details::ImageToken image;
extern details::FrameToken frame
} // namespace Tk
*/
;