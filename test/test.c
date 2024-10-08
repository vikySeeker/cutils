#include<stdio.h>
#include "../lib/cutils.h"
#include<string.h>

void read_input_test(){
	string s1;
        s1.value = (char*)read_input('\n');
	//s1.len = strlen(s1.value);
        printf("%s is %d characters long...\n", s1.value, s1.len);
        free(s1.value);
}


void strtok_test() {
	char *words = "Hello world";
	char *tok = strtok(words, "");
	while(tok) {
		printf("%s\n", tok);
		tok = strtok(NULL, " ");
	}
}

void string_split_test() {
	string input;
	input.value = (char*)read_input('\n');
	input.len = strlen(input.value);
	printf("%s is %d characters long...\n", input.value, input.len);
	puts("Splitting string...");
	char *delim = "/";
	strings *s = string_split(&input, delim);
	puts("Printing tokens...");
	printf("Total Tokens = %d\n\n", s->length);
        for(int i=0; i<s->length; i++) {
                printf("%s is %d characters long!\n", s->arr[i].value, s->arr[i].len);
        }
	free(input.value);
}

void string_join_test() {
	string input;
        input.value = read_input('\n');
        input.len = strlen(input.value);
        printf("%s is %d characters long...\n", input.value, input.len);
        puts("Splitting string...");
        char *delim = " ";
        strings *s = string_split(&input, delim);
	char *delim2 = read_input('\n');
	string *out = string_join(s, delim2);
	printf("Joined String: %s is %d characters long...", out->value, out->len);
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

void to_int_test() {
	string s;
	s.value = (char*)read_input('\n');
	s.len = strlen(s.value);
	printf("%d", to_int(&s));
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
		puts("Executing string_test...\n");
		string_test();
	} else if(!strcmp(argv[1], "stt")) {
		puts("Executing string_trim_test...\n");
		string_trim_test();
	} else if(!strcmp(argv[1], "rit")) {
		puts("Executing read_input_test...\n");
		read_input_test();
	} else if(!strcmp(argv[1], "sst")) {
		puts("Executing string_split_test...");
		string_split_test();
	} else if(!strcmp(argv[1], "sjt")) {
		puts("Executing string_join_test...");
		string_join_test();
	} else if(!strcmp(argv[1], "strt")) {
		puts("Executing strtok_test...");
		strtok_test();
	} else if(!strcmp(argv[1], "tit") != 0) {
		puts("Executing to_int_test...");
		to_int_test();
	}
	return 0;
}
