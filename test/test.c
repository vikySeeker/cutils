#include<stdio.h>
#include "../lib/cutils.h"

void getStringInputTil_test(){
	string s1;
        s1.value = (char*)getStringInputTil('\n');
	s1.len = strlen(s1.value);
        printf("%s is %d characters long...\n", s1.value, s1.len);
        free(s1.value);
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

void string_test() {
	string s1 = {0, NULL};
	s1.value = getStringInputTil('\n');
	s1.len = strlen(s1.value);
	printf("%s is %d characters long...\n", s1.value, s1.len);
	free(s1.value);
}

int main(){
	//string_trim_test();
	//getStringInputTil_test();
	string_test();
	return 0;
}
