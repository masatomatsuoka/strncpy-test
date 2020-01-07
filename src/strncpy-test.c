/*
 ============================================================================
 Name        : strncpy-test.c
 Author      : masatom
 Version     :
 Copyright   : Are you sure to see my source code?
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *hello = "!!!Hello World!!!!!!Hello World!!!!!!Hello World!!!!!!Hello World!!!!!!Hello World!!!!!!Hello World!!!";

int main(void) {
	char buf[30];

	memset(buf, 0, 30);
	strncpy(buf, hello, sizeof(buf) - 1);
	printf("text:%s\n", buf); /* prints !!!Hello World!!! */
	printf("size:%ld\n", sizeof(buf));
	return EXIT_SUCCESS;
}
