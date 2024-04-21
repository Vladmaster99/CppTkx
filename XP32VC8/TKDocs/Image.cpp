/*
 * Image.cpp
 * Compiled on VS2015
 *
 * simple open images in a simple grid
 * Tk
 * [-] [ ] try bmp
 * [X] [ ] Try gif
 * [X] [ ] Try png
 * [-] [ ] Try Jpeg ... probably will not work. 
 * Try Tk and Tkx
 */

// import tkinter as tk

#include "cpptk.h"
#include <iostream>

//from tkinter import ttk
using namespace Tk;
using namespace std;
//from PIL import Image, ImageTk


int main(int, char *argv[])
       {init(argv[0]);
// root = Tk()
// sw = globals.screenWidth, sh = globals.screenHeight)
	int sh = winfo(screenheight, ".");
	int sw = winfo(screenwidth,".");
	sh -= 100; 
//canvas = Canvas(root 
	canvas(".c") -insertbackground("blue") -insertborderwidth(3) -height(600) -width(600);
//canvas.grid(column=0, row=0, sticky=(N, W, E, S))
	grid(configure,".c") -column(1) -row(1) -sticky("nwes");
//root.columnconfigure(0, weight=1)
	grid(columnconfigure,".c",1) -weight(1);
//root.rowconfigure(0, weight=1)
	grid(rowconfigure,".c",1) -weight(1);
	Tk::images(create,photo,".i00") -file("Image/back.gif");
	".c" << create(image,20,20) -image(".i00") -anchor("nw");
	Tk::images(create,photo,".i01") -file("Image/cross.png");
	".c" << create(image,80,80) -image(".i01") -anchor("nw");
//	Tk::images(create,bitmap,".i02") -format(bitmap) -file("Image/1.bmp");
//	".c" << create(image,120,120) -image(".i02") -anchor("nw");
//	".c" << create(image,120,120) -image(".i02") -anchor("nw");
//	Tk::images(create,photo,".i03") -format(jpeg) -file("Image/check.jpg");
//	".c" << create(image,160,160) -image(".i03") -anchor("nw");
///	grid(configure,".i00") -column(0) -row(0) -sticky("ne");
///	Tk::image(".i10");
///	grid(configure,".i10") -column(1) -row(0) -sticky("ne");
	
//        root.mainloop()
	wm(geometry,".","=700x800-2560+100");
	runEventLoop();
	}

