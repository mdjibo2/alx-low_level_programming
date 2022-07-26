#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **td;
	int hgt, wid;

	if (width <= 0 || height <= 0)
		return (NULL);

	td = malloc(sizeof(int *) * height);

	if (td == NULL)
		return (NULL);

	for (hgt = 0; hgt < height; hgt++)
	{
		td[hgt] = malloc(sizeof(int) * width);

		if (td[hgt] == NULL)
		{
			for (; hgt >= 0; hgt++)
				free(td[hgt]);

			free(td);
			return (NULL);
		}
	}
	for (hgt = 0; hgt < height; hgt++)
	{
		for (wid = 0; wid < width; wid++)
			td[hgt][wid] = 0;
	}
	return (td);
}
