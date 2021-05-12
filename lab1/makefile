main: main.o V.o
	g++ main.o V.o -Wall -g -o lab

main.o: main.cpp
	g++ -c main.cpp

V.o: V.cpp
	g++ -c V.cpp
	
clean:
	rm -rf a.out