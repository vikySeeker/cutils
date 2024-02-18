
//function from cutils library

typedef struct string {
	int len;
	char* value;
} string;


/* trims the leading and trailing spaces in a string
 * takes char** pointer as argument and returns number of spaces removed.
 * if returns -1 invalid string.
 *
 */
int string_trim(char**);


/* gets input from stdin til delimeter
 * delimeter is passed as argument.
 * passing '\n' as delim gets input from user til it encounters new line.
 * returns address of input.
 */ 
char* getStringInputTil(char);


