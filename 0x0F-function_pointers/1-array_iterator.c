#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * wrritten by apete
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*printf*/
	unsigned int z;

	if (array == NULL || action == NULL)
		return;

	for (z = 0; z < size; z++)
	{
		action(array[z]);
	}
}
