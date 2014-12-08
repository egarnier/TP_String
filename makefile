all: prog_main

prog_main: prog_main.cpp String.o
	g++ -Wall -lm -o prog_main prog_main.cpp String.o

String.o: String.h String.cpp
	g++ -Wall -lm -c -o  String.o String.cpp

clean :
	rm *.o

mrproper: clean
	rm prog_main
