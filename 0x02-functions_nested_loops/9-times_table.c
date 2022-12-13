#include "main.h"

/**
 * times_table - print out the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int v, h;

	for (h = 0 ; h < 10 ; h++)
	{
		_putchar('0');
		for (v = 1 ; v < 10 ; v++)
		{
			int sum = v * h;

			_putchar(',');
			if (sum / 100 == 0)
			{
				_putchar(32);
			}
			if (sum / 10 == 0)
			{
				_putchar(32);
			}
			else
			{
				_putchar('0' + (sum / 10));
			}
			if (sum % 10 == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar('0' + (sum % 10));
			}
		}
		_putchar('\n');
	}
}
