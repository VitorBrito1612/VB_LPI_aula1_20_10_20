
all: prog.exe
	prog.exe

prog.exe: main.o
	gcc -o $@ $<

main.o: main.c
	gcc -c $<

clean:
	del main.o
	del prog.exe
