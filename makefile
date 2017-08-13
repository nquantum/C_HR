all: hello.exe

clean:
	rm hello.o hello.exe

hello.exe: hello.o
	gcc -g -o hello.exe hello.o
hello.o:
	gcc -g -c hello.c