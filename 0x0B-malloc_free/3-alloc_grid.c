#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * written by apete a student of ALX
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	/*printf*/
	int **hee;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	hee = malloc(sizeof(int *) * height);

	if (hee == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		hee[a] = malloc(sizeof(int) * width);

		if (hee[a] == NULL)
		{
			for (; a >= 0; a--)
				free(hee[a]);

			free(hee);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			hee[a][b] = 0;
	}

	return (hee);
}
