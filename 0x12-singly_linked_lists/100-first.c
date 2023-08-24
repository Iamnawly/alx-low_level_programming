#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 * written by apete
 */
void first(void)
{
	/*printf*/
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
