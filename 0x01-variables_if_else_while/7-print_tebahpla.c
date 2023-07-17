#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * written by apete
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*char*/
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
