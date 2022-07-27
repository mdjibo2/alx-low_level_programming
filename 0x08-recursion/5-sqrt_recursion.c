#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: number to sqrt
 * Return: If n > 0 - square root of n
 *         If n < 0 - -1 to indicate an error.
 *	   If n == 0 - 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (_sqrt_recursion(n + 1));
}
