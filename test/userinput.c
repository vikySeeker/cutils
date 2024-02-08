#include<stdio.h>
#include<stdlib.h>
#include "../lib/cutils.h"



int main(){
	char* input = malloc(sizeof(char)*10);
	getStringInputTil(input, 'q');
	free(input);
	return 0;
}
