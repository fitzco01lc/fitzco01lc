all: islower.o makelower.o
	cc -o makelower makelower.o islower.o

islower.o: islower.c islower.h
	cc -c islower.c

makelower.o: makelower.c islower.h
	cc -c makelower.c

clean:
	rm *.o
	rm makelower
