all: executioner.o executioner.c
	gcc -o program executioner.o

executioner.o: executioner.c
	gcc -c executioner.c

run:
	./program

clean:
	rm *.o
