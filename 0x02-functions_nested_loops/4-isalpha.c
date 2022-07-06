#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for alphabet.
 * @c: variable
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
