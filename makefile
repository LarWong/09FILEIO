all: driver.c fileio.o
	gcc -o testy fileio.o driver.c

fileio.o: fileio.c fileio.h
	gcc -c fileio.c fileio.h
run:
	./testy
clean:
	rm ./fileio *.o *.gch
