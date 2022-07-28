#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  multiplies two numbers and prints the product
 * @argc: Number of command line arguments
 * @argv: the arguments that was passed to the program
 * Return: 1 if less than two arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);
		printf("%d\n", j);
	}
	return (0);
}
