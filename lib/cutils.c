#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "cutils.h"


int string_trim(string* input);
char* read_input(char delim);


/* trims the leading and trailing spaces in a string
 * takes char** pointer as argument and returns number of spaces removed.
 * if returns -1 invalid string.
 *
 */
int string_trim(string* input) {

	int len = input->len-1;
	if(input->len<=0) {
		return -1;
	}
	int i = 0;
	while(input->value[i] == ' ') {
		++i;
	}
	input->value = (input->value)+i;
	len -= i;
	while(input->value[len] == ' ') {
		input->value[len] = 0;
		--len;
		++i;
	}
	//input->value = (input->value)+i;
	input->len = len-i;
	return i;
}


/* gets input from stdin til delimeter
 * delimeter is passed as argument.
 * passing '\n' as delim gets input from user til it encounters new line.
 * returns address of input.
 */
char* read_input(char delim) {

        int buffersize=0, currbuffer = 40; 
	char char_input;
	char *input;
	input = (char*)malloc(sizeof(char)*currbuffer);

        while((char_input=getchar())!=delim){
		input[buffersize++] = char_input;
                if(buffersize >= currbuffer) {
                        currbuffer += 20;
                        input = (char*)realloc(input, sizeof(char)+currbuffer);
                }
         
        }
	input[buffersize] = 0;
        return input;
}
