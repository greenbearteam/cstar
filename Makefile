all: cstar.o
	gcc -o all cstar.o
main.o: CStar/CStar.c CStar/CStar.h
	gcc -c CStar/CStar.c CStar/CStar.h
clean:
	del main.o
