# Makefile 

main: main.o functions.o
	g++ -o main main.o functions.o

main.o: main.cpp functions.h
	g++ -c main.cpp

functions.o: functions.cpp functions.h
	g++ -c functions.cpp

clean:
	rm -f main.o functions.o
	rm main
