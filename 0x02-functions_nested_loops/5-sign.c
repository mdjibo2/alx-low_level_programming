#include "main.h"
/**
 * print_sign - prints the sign of a number.
 *@c: print int
 * Return: Always 0.
 */

int print_sign(int c)
{
	if (c >= 48)
	{
		return (1);
		_putchar(43);
	}
	else if (c == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}

}
