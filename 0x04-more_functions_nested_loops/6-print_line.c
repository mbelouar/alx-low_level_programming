#include "main.h"
/**
 *print_line - prints a line
 *
 *@n:input
 *
 *Return:void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			if (i == n)
			{
				_putchar('_');
				_putchar('\n');
			}
			else
			{
				_putchar('_');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
