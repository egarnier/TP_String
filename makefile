all: prog_main

prog_main: prog_main.o 

mrproper: clean
	rm prog_main
