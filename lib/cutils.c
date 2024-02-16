#include<stdio.h>
#include<stdlib.h>

char* getStringInputTil(char delim) {
	//printf("input = %p\ninputview = %p\n",input,inputview);
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
                        //printf("Increamented Current Buffersize to: %d\n\nnow input = %p\n", currbuffer, input);
                        inputview = input+(buffersize-1);
			//printf("inputview = %p\n",inputview);
                }
         
        }
	//printf("%s", input);
	
        return input;
}
