#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
*
* Return: Always 1.
*/

void times_table(void)
{
	int a, b, result;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			result = a * b;
			result = result / 10;
			return (result);
		}
	}
}
