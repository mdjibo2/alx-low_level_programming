#include "main.h"

/**
 * _isupper - evalue if letter is uppercase .
 *@c: print int
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char string1[40] = "Hello ";
	char string2[20] = "Wordl!\n";
	int i=0,j=0;

	dest=string1;
	src=string2;

	while(string1[i]!='\0')
	{
	++dest;
	i++;
	}
	while(string2[j]!='\0')
	{
		*dest=*src;
		dest++;
		src++;
		j++;
	}
	return (dest); 
}
