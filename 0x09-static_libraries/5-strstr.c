#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * written by apete
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	/*for*/
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *a = needle;

		while (*l == *a && *a != '\0')
		{
			l++;
			a++;
		}

		if (*a == '\0')
			return (haystack);
	}

	return (0);
}
