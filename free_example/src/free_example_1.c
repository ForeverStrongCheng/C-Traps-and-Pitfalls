/*
 ============================================================================
 Name        : free_example_1.c
 Author      : foreverstrong
 Version     :
 Copyright   : Your copyright notice
 Description : free_example in C, Ansi-style
 ============================================================================
 */

/* free example */
#include <stdlib.h>     /* malloc, calloc, realloc, free */

int main()
{
	int *buffer1, *buffer2, *buffer3;

	buffer1 = (int*) malloc(100 * sizeof(int));
	buffer2 = (int*) calloc(100, sizeof(int));
	buffer3 = (int*) realloc(buffer2, 500 * sizeof(int));

	free(buffer1);
	free(buffer3);

	return 0;
}
