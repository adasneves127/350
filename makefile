$(CC) = gcc

all: main.o
	$(CC) -o main main.o
	rm -f main.o
	./main

.PHONY: debug_X86
debug_X86: main.o
	$(CC) -g -o main main.o
	rm -f main.o
	gdb main

.PHONY: debug_M1
debug_M1: main.o
	$(CC) -g -o main main.o
	rm -f main.o
	lldb main

.PHONY: clean
clean:
	rm -f *.o main