

all: 
	   gcc -o bin/unimark src/unimark.c 
	   
	
test: 
	     less unitest.mrk ; unimark unitest.mrk unitest.tex   ; pdflatex --shell-escape unitest.tex  ; mupdf unitest.pdf
	   
	   
