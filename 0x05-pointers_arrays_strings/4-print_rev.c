#include "main.h"
#include<string.h>

/**
 * print_rev - reverses a string
 * @s: print string
 * @begin_ptr: beginning of string
 * @end_ptr: end of string
 * Return : always 0.
 */
void print_rev(char *s)
{
	int l, i;
	char *begin_ptr, *end_ptr, ch;
	l = strlen(s);

	begin_ptr = s;
	end_ptr = s;

	for (i = 0; i < l - 1; i++)
		 end_ptr++;
	for (i = 0; i < l - 1; i++)
		   end_ptr++;
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}
}
