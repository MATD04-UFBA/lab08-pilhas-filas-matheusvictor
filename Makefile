.c.o:
	gcc -c $*.c

.cpp.o:
	g++	-c $*.cpp

all:	testePilha testeFila

testePilha:	tadPilha.o testePilha.o
	g++ -o $@ $^

testeFila:	tadFila.o tadNoSimp.o testeFila.o
	g++ -o $@ $^

clean:
	rm *.o testePilha testeFila
