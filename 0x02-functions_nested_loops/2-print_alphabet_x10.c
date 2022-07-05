#include"main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int A, n = 0;

	while (n < 10)
	{
		for (A = 'a'; A <= 'z'; A++)
		{
			_putchar(A);
		}
		_putchar('\n');
		n++;
	}
}
