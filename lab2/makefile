main: main.o StringBack.o
	g++ main.o StringBack.o -Wall -g -o lab

main.o: main.cpp
	g++ -c main.cpp

StringBack.o: StringBack.cpp
	g++ -c StringBack.cpp
	
clean:
	rm -rf a.out