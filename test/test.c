#include<stdio.h>
#include<stdlib.h>
#include "../lib/cutils.h"



int main(){
	char* input;
	input = (char*)getStringInputTil('\n');
	FILE* newfile;
	newfile = fopen("userinput.txt", "w");
	fputs(input, newfile);
	puts("\nStored the data in userinput.txt successfully");
	printf("\n\n%s", input);
	//free(input);
	return 0;
}
