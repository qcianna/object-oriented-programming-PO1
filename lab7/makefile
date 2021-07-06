main: main.o GameObj.o
	g++ main.o GameObj.o -Wall -g -o lab

main.o: main.cpp
	g++ -c main.cpp

GameObj.o: GameObj.cpp
	g++ -c GameObj.cpp
	
clean:
	rm -rf a.out