#include"main.h"

/**
 * main - prints the alphabet, in lowercase
 *
 * Return: Always 1 (Success)
 */
void print_alphabet(void)
{
	int A;

	for (A = 'a'; A <= 'z'; A++)
	{
		_putchar(A);
	}
	_putchar('\n');
	return ;
}
