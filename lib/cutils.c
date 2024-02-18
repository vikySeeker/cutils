#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int string_trim(char** input);
char* getStringInputTil(char delim);


/* trims the leading and trailing spaces in a string
 * takes char** pointer as argument and returns number of spaces removed.
 * if returns -1 invalid string.
 *
 */
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
		i++;
	}
	*input = (*input)+i;
	return i;
}


/* gets input from stdin til delimeter
 * delimeter is passed as argument.
 * passing '\n' as delim gets input from user til it encounters new line.
 * returns address of input.
 */
char* getStringInputTil(char delim) {

        int buffersize=0, currbuffer = 40; 
	char char_input;
	char* input = (char*)malloc(sizeof(char)*currbuffer);

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
