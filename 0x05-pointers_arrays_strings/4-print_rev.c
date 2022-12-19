#include "main.h"

/**
 * print_rev.c - prints a string, in reverse
 *
 * @s : the string that we must reverse
 *
 */

void print_rev(char *s)
{
	int i;
	int len;

	len = 0;
	while (s[len])
		len++;

	i = len - 1;
	while (i)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
