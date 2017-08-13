CXX = gcc

all: hello.exe

clean:
	rm hello.o hello.exe

hello.exe: hello.o
	${CXX} -g -o hello.exe hello.o
hello.o:
	${CXX} -g -c hello.c