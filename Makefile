main: main.o postscript.o
	g++ main.o postscript.o -o main

main.o: main.cpp
	g++ -c main.cpp

postscript.o: postscript.cpp postscript.hh
	g++ -c postscript.cpp

clean:
	rm *.o main.exe