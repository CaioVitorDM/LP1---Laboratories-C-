geometria: geometria.o functions.o
	g++ -Wall -pedantic -Iinclude -o ./bin/geometria geometria.o functions.o

geometria.o: src/geometria.cpp 
	g++ -c src/geometria.cpp -Iinclude

functions.o: src/functions.cpp  
	g++ -c src/functions.cpp -Iinclude