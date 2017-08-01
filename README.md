
![alt tag](https://raw.githubusercontent.com/spartrekus/Images-GNU-Free-Software-Directory-/master/free-software.jpg)


# Unimark

## Introduction
It's all about freedom and GNU software. 
Unimark has been developed with the purpose to give freedom to users for word processing and web design.
Universal Markup language for FreeBSD and Linux Operating Systems, and maybe more. 

## Aims
* Unimark is just about freedom !! 
* Unimark was born to give full freedom to writers, programmers, students, and users. 
* Unimark will deliver you from using bloated systems !!
* Unimark can be easily compiled using CC compiler on most operating systems.

## Description
Unimark can be compiled on any platforms having a GNU GCC compiler. 
Unimark can give you freedom using HTML, TeX, LaTeX,... since it is tiny and 
it has few simple basic, universal, functionalities.
Unimark is very light and very powerful.

Unimark can be easily customized to work on more output styles, not only TeX, but others i.e. html...

The Markup syntax of Unimark should be destined first to be readable and it shall
be displayed easily and being human readable on any machine/platform. 


~~~~
//////////////////////////////////
//////////////////////////////////
// UNIMARK IS A POWERFUL MARKUP //
// AUTHOR: Spartrekus           //
// GNU LICENCE                  //
// Date: 2017 - June - 25       //
// Aim: 2017 - June - 25        //
//   For Making Thesis Easily   //
//   and more                   //
// Destined to Amiga, Sun, .... //
// Atari, CPC, ... having C     //
//////////////////////////////////
//////////////////////////////////
~~~~


## Installation
You may run 'make' to compile it and you can try it under FreeBSD with 'make test' for a TeX format.


## The Universal Syntax, Compilation and Portability 
~~~~

// this below will input a file (raw format) 
!set advanced
!input{header.tex}

////////////////////////////////
////////////////////////////////
// this is a comment 
////////////////////////////////
////////////////////////////////

!chap my chapter            
!sec this is a section ending
!subsec this is a subsection ending
!subsubsec this is a subsubsection ending

> Here you can have an example of itemize use (itemize)
-  this is my item, apple
-  this is my item, pear
-  this is my item, orange
-  this is my item, grape

!set advanced    /* this allows to give  more functionalities if it is included during compilation time (see options).*/
!xmsg{hello world, did you see this?}  /* nice popups for co-workers */
!mkdir{figs}{1}  /* create a directory */
!wget{https://www.gnu.org/graphics/gerwinski-gnu-head.png}{figs/logo.png}{1}    /* nice popups for co-workers */
!clr
!fig{figs/logo.png}{this is a logo}  /* show pic. nice function for co-workers since it is fetched from server (see options).*/
// it is useful to fetch directly the images from the web.
// there are less than 5 functions, which are allowed to make system call.

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris enim dolor, sagittis sit amet purus ut, cursus dignissim lacus. Etiam sit amet sodales mi, in aliquet diam. Suspendisse volutpat sit amet dui at condimentum. Cras iaculis erat sit amet dapibus ultrices. Quisque sed lectus risus. Nullam a sem nec turpis euismod porta. Vestibulum leo ex, lacinia volutpat augue a, egestas euismod tellus. Sed ex nisl, dignissim ac sagittis non, elementum id elit. Phasellus vel iaculis lorem, quis varius urna. Suspendisse vitae interdum velit. Integer nec scelerisque eros, nec euismod diam. Aliquam volutpat magna eget velit malesuada vestibulum. Donec a enim mi. Cras vestibulum erat leo, et tincidunt ex aliquet a.
!fig{myfigure.jpg} 

Vivamus sit amet efficitur augue, accumsan ornare libero. Morbi egestas dignissim mi, sed lobortis sapien. Etiam in consectetur leo, in porta neque. Proin a massa lectus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Aliquam non nibh felis. Integer cursus sit amet risus non lobortis. Sed cursus massa non lorem rutrum ullamcorper. Suspendisse et nibh massa.
!fig{myfigure.jpg}



// this below will input a file (raw format) 
// if the file is not found, Unimark will skip the input line.
!clr      /*comment: new page here*/
!input{test.tex}

!end
~~~~

## Outlook
It will be too destined to work for HTML files in the future.


* Unimark will never let you will alone with your format, since you can re-compile it on any platforms with GNU GCC 
* Unimark can be easily ported to work on a website using PHP or JAVA 
