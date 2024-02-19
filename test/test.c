#include<stdio.h>
#include "../lib/cutils.h"

void read_input_test(){
	string s1;
        s1.value = (char*)read_input('\n');
	//s1.len = strlen(s1.value);
        printf("%s is %d characters long...\n", s1.value, s1.len);
        free(s1.value);
}


void string_trim_test() {
	string input;
	input.value = (char*)malloc(sizeof(char)*100);
        input.value = (char*)read_input('\n');
	input.len   = strlen(input.value);
        char* inputview = input.value;

	printf("Before Length = %d\n", input.len);
        printf("Before   Trim = %s EOS\n", input.value);
        int count = string_trim(&input);
        printf("After    Trim = %s EOS\n", input.value);
	printf("After  Length = %d\n", input.len);
	printf("Trimmed %d spaces\n",count);
        free(inputview);
}

void string_test() {
	string s1 = {0, NULL};
	s1.value = (char*)read_input('\n');
	s1.len = strlen(s1.value);
	printf("%s is %d characters long...\n", s1.value, s1.len);
	free(s1.value);
}

int main(int argc, char **argv){
	if(!strcmp(argv[1], "st")) {
		printf("Executing string_test...\n");
		string_test();
	} else if(!strcmp(argv[1], "stt")) {
		printf("Executing string_trim_test...\n");
		string_trim_test();
	} else if(!strcmp(argv[1], "rit")) {
		printf("Executing read_input_test...\n");
		read_input_test();
	}
	return 0;
}
