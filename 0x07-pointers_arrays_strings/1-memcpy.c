#include "main.h"

/**
 * _memcpy - copies  n bytes from memory area src to memory area dest.
 * @dest: input destinations memory area
 * @src: input source memory area
 * @n: number of bytes
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
