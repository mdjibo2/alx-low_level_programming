#include<stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;
	for (x = '0'; x <= '9'; x++)
	{
		for (y = '1'; y <= '9'; y++)
		{
			if (x == '0' || (x != y && x < y))
			{
				putchar(x);
				putchar(y);
				if (x != '8')
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
