#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * written by apete
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*int*/
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
