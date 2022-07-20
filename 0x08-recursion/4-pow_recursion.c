#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the number to raised to power
 *@y: power of multiplication
 * Return: If y > 0 - the power of x.
 *         If y < 0 - 1 to indicate an error.
 *	   If y == 0 - 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x *= _pow_recursion(x, y - 1));
}
