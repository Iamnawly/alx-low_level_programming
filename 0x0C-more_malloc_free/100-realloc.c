#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * written by apete
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *bad, unsigned int old_size, unsigned int new_size)
{
	char *bad1;
	char *old_ptr;
	unsigned int a;

	if (new_size == old_size)
		return (bad);

	if (new_size == 0 && bad)
	{
		free(bad);
		return (NULL);
	}

	if (!bad)
		return (malloc(new_size));

	bad1 = malloc(new_size);
	if (!bad1)
		return (NULL);


	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			bad1[a] = old_ptr[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			bad1[a] = old_ptr[a];
	}

	free(bad);
	return (bad1);
}
