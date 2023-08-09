#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * wrrritten by apete
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/*printf*/
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
