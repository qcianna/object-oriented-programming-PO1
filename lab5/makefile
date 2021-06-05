main: main.o Primitive.o Product.o Sum.o Ratio.o
	g++ main.o Primitive.o Product.o Sum.o Ratio.o -Wall -g -o lab

main.o: main.cpp
	g++ -c main.cpp

Primitive.o: Primitive.cpp
	g++ -c Primitive.cpp

Product.o: Product.cpp
	g++ -c Product.cpp

Sum.o: Sum.cpp
	g++ -c Sum.cpp
	
Ratio.o: Ratio.cpp
	g++ -c Ratio.cpp

clean:
	rm -rf a.out