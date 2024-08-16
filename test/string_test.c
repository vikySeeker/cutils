#include<stdio.h>
#include<stdlib.h>

int main() {
	char *first;
	char *last;
	printf("Enter you first name: ");
	scanf("%s", &first);
	printf("Enter you last name: ");
	scanf("%s", &last);
	printf("Welcome, %s %s!", first, last);
	free(first);
	free(last);
}
