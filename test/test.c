#include<stdio.h>
#include<stdlib.h>
#include "../lib/cutils.h"

void getStringInputTil_test(){
	char* input;
        input = (char*)getStringInputTil('\n');
        //FILE* newfile;
        //newfile = fopen("userinput.txt", "w");
        //fputs(input, newfile);
        //puts("\nStored the data in userinput.txt successfully");
        printf("\n\n%s", input);
        free(input);

}


void string_trim_test() {
	char* input = (char*)malloc(sizeof(char)*100);
        input = getStringInputTil('\n');
        char* inputview = input;
        printf("Before Trim = %s \n", input);
        int count = string_trim(&input);
        printf("After  Trim = %s\n", input);
	printf("Trimmed %d spaces\n",count);
        free(inputview);
}

int main(){
	string_trim_test();
	//getStringInputTil_test();
	return 0;
}
