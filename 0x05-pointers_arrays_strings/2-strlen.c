#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: pointer to a char
 * @str: pointer to char
 *
 * Return : always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while(*s != '\0')
	{
		s++;
		len++;
	
        }
	return(len);
}
