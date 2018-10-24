all: fileio.o
	gcc -o fileio fileio.o
fileio.o: fileio.c fileio.h
	gcc -c fileio.c fileio.h
run:
	./fileio
clean:
	rm ./fileio *.o *.gch
