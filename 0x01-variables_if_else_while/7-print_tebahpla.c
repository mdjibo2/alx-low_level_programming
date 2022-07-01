#include <stdio.h>
/**
 * main - print alphabet in reverse with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
	putchar(ch);
	ch--;
	}
	putchar('\n');
	return (0);
}
