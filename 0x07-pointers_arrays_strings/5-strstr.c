#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate string
 * @haystack: pointer to a string
 * @needle: pointer to a string
 * Return: returns a pointer to the
 * beginning of the located substring, else, NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *first, *compare;

	while (*haystack)
	{
		first = haystack;
		compare = needle;

		while (*haystack && *compare && *haystack == *compare)
		{
			haystack++;
			compare++;
		}
		if (!*compare)
		{
			return (first);
		}
		else
		{
			haystack = first + 1;
		}
	}
	return (NULL);
}
