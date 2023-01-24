#include "main.h"

/**
 * _putstr: print a given string.
 *
 * Return: The length of the str.
 */

int _putstr(char *str)
{
	int i;

	if (str == NULL)
	{
		_putstr("(null)");
		return (6);
	}
	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
