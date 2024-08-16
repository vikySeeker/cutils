CFLAGS = -Wno-implicit-function-declaration -Wno-builtin-declaration-mismatch

all: test

test: cutils.o test.o
	@echo "building and linking test..."
	gcc -o test test.o ../lib/cutils.o -g

cutils.o: ../lib/cutils.c
	@echo "compiling cutils..."
	gcc -c ../lib/cutils.c -o ../lib/cutils.o -g 
test.o: test.c
	@echo "compiling test..."
	gcc $(CFLAGS) -c test.c -g 

clean:
	@echo "removing everything but the source files.."
	rm test.o test ../lib/cutils.o
