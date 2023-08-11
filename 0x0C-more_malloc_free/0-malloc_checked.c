#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * written by apete
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *apr;

	apr = malloc(b);

	if (apr == NULL)
		exit(98);

	return (apr);
}
