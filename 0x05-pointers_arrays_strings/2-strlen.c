#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: pointer to a char
 * Return : always 0.
 */
int _strlen(char *s)
{
	char *s[100] = {"My first strlen!"};
	int i,totChar;
	totChar=0;

	for(i=0; s[i] != '\0'; i++)
	{
		totChar++;
	}
	return (0);
}
