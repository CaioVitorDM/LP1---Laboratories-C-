complexo: complexo.o classes.o
	g++ -Wall -pedantic -std=c++17 -Iinclude -o ./bin/complexo complexo.o classes.o

complexo.o: src/complexo.cpp 
	g++ -std=c++17 -c src/complexo.cpp -Iinclude

classes.o: src/classes.cpp  
	g++ -std=c++17 -c src/classes.cpp -Iinclude