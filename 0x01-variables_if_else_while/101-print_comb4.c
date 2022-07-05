#include<stdio.h>
/**
* main - prints all possible combinations of three-digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x, y, z;

for (x = '0'; x <= '9'; x++)
{
	for (y = x + 1; y <= '9'; y++)
	{
	for (z = y + 1; z <= '9'; z++)
		{
	if ((x == '0' && y == '1') || (x != y && y != z && x < y && y < z))
	{
		putchar(x);
		putchar(y);
		putchar (z);
		if (x != '7' || y != '8')
		{
			putchar(44);
			putchar(32);
		}
		}
		}
	}
}
	putchar('\n');
	return (0);
}
