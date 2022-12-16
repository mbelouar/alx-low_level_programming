#include "main.h"
/**
 *print_square - prints square using #
 *@size:input
 *Description:# square
 *
 *Return:void
 *
 */
void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = 1; j <= size; j++)
			{
				if (j == size)
				{
					_putchar('#');
					_putchar('\n');
				}
				else
				{
					_putchar('#');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
