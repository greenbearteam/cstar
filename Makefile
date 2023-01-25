all: main.o
	gcc -o all main.o
main.o: src/main.cpp
	gcc -c src/main.cpp
clean:
	del main.o
