#include<stdio.h>
#include<unistd.h>
/**
 * main - print sentence to the standard error
 *
 * Return: Always 1 (Success)
 */
int main()
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-1r\n", 115);
	return (1);
}
