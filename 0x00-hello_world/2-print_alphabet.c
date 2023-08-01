#include <stdio.h>
/**
 * main - Prints the alphabet.
 * written by apete
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*char*/
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
