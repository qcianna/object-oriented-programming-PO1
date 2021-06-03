main: main.o Funkcje.o ZlozenieFunkcji.o
	g++ main.o Funkcje.o ZlozenieFunkcji.o -Wall -g -o lab

main.o: main.cpp
	g++ -c main.cpp

Funkcje.o: Funkcje.cpp
	g++ -c Funkcje.cpp

ZlozenieFunkcji.o: ZlozenieFunkcji.cpp
	g++ -c ZlozenieFunkcji.cpp
	
clean:
	rm -rf a.out