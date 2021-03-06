#include "main.h"

/**
 * _strlen_recursion - calculates the length of the string pointed to by s
 * @s: pointer to a string
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
