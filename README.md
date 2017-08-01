
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

!fig{myfigure.jpg} 
!fig{myfigure.jpg} 
!fig{myfigure.jpg} 

!xmsg{hello world, did you see this?}
!mkdir{logo.png}{1}
!wget{https://www.gnu.org/graphics/gerwinski-gnu-head.png}{figs/logo.png}{1}

// this below will input a file (raw format) 
// if the file is not found, Unimark will skip the input line.
!input{test.tex}

!end
~~~~

## Outlook
It will be too destined to work for HTML files in the future.


* Unimark will never let you will alone with your format, since you can re-compile it on any platforms with GNU GCC 
* Unimark can be easily ported to work on a website using PHP or JAVA 
