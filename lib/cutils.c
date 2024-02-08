#include<stdio.h>
#include<stdlib.h>

int getStringInputTil(char* input, char delim) {
        char* inputview = input;
        char single_char;
        int buffersize=1, currbuffer = 10; 
        while((single_char=getchar())!='\0'){
                //printf("%c", single_char);
                if(single_char=='q')
                        break;
                *inputview = single_char;
                inputview++;
                buffersize++;
                if(buffersize >= currbuffer) {
                        currbuffer *= 2;
                        input = realloc(input, currbuffer);
                        printf("Increamented Current Buffersize to: %d\n", currbuffer);
                        inputview = input+(buffersize-1);
                }
         
        }
        printf("%s", input);
        return 0;
}
