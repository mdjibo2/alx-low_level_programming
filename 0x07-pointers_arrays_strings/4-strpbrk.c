#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: pointer to a string
 * @accept: pointer to a string
 * Return: resturns accepted string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, len, exist = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	len = i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= len)
				{
					len = j;
					exist = 1;
				}
			}
		}
	}
	if (exist == 1)
	{
		return (&s[len]);
	}
	else
	{
		return (NULL);
	}
	return (0);
}
