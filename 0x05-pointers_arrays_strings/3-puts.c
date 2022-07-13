#include "main.h"

/**
 * _puts - print string
 * @str: print string
 * Return : always 0.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
