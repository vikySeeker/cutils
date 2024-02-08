# Custom Utils in c

This library contains my custom implementaion of c functions.

As a start I implemented a **getStringInputTil** function which takes an input pointer and a delimeter that get input from the user til the delimiter is encoutered.

## Steps to Compile
NOTE: I note this down because I'll eventually forget this [Yes I don't know how to write make file :)].

- Step 1: gcc -c -o userinput.o  userinput.c
- Step 2: gcc -c -o cutils.o cutils.c
- Step 3: gcc -o userinput userinput.o cutils.o
