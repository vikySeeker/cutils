
all: test

test: cutils.o test.o
	@echo "building and linking test..."
	gcc -o test test.o ../lib/cutils.o

cutils.o: ../lib/cutils.c
	@echo "compiling cutils..."
	gcc -c ../lib/cutils.c -o ../lib/cutils.o
test.o: test.c
	@echo "compiling test..."
	gcc -c test.c

clean:
	@echo "removing everything but the source files.."
	rm test.o test userinput.txt ../lib/cutils.o
