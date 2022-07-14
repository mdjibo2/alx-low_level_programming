#include "main.h"

/**
 * swap_int - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @a: pointer to an integer
 * @b: pointer to an integer
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
