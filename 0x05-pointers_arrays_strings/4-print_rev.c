#include "main.h"
/**
 * print_rev.c -  function that prints a string, in reverse, followed by a new line.
 *
 * @s : the string that we must reverse
 * return : the reverse string
 */

void print_rev(char *s)
{
	int i;
	int len;

	len = 0;
	while (s[len])
		len++;

	i = len;
	while (i)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
