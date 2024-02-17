#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int string_trim(char** input);


int string_trim(char** input) {

	unsigned int length = strlen(*input);
	if(length<=0) {
		return -1;
	}
	int i = 0;
	while((*input)[i] == ' ') {
		++i;
	}
	--length;
	while((*input)[length] == ' ') {
		(*input)[length] = 0;
		--length;
	}
	*input = (*input)+i;
	return i;
}

char* getStringInputTil(char delim) {

        int buffersize=1, currbuffer = 10; 
	char char_input;
	char* input = (char*)malloc(sizeof(char)*currbuffer);
	char* inputview = input;

        while((char_input=getchar())!=delim){
                *inputview = char_input;
                inputview++;
                buffersize++;
                if(buffersize >= currbuffer) {
                        currbuffer *= 2;
                        input = (char*)realloc(input, sizeof(char)*currbuffer);
                        inputview = input+(buffersize-1);
                }
         
        }
	
        return input;
}
