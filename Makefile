CC=gcc
CFLAGS=-I.
DEPS = vector.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

vectorlib: main.o vector.o 
	gcc -o main main.o vector.o && rm -f *.o