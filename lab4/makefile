main: main.o Figura.o Prostokat.o KontenerFigur.o Wierzcholek.o
	g++ main.o Figura.o Prostokat.o KontenerFigur.o Wierzcholek.o -Wall -g -o lab

main.o: main.cpp
	g++ -c main.cpp

Figura.o: Figura.cpp
	g++ -c Figura.cpp

Prostokat.o: Prostokat.cpp
	g++ -c Prostokat.cpp

KontenerFigur.o: KontenerFigur.cpp
	g++ -c KontenerFigur.cpp
	
Wierzcholek.o: Wierzcholek.cpp
	g++ -c Wierzcholek.cpp

clean:
	rm -rf a.out