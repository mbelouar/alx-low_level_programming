#include <stdio.h>

/**
 * print_fib_x50 - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: void
 */
void print_fib_x50(void)
{
	unsigned int target;
	unsigned long int f, l, i, fib;

	f = 1;
	l = 2;
	target = 50 - 2;
	printf("1, 2, ");
	for (i = 0 ; i < target ; i++)
	{
		fib = f + l;
		printf("%lu", fib);
		f = l;
		l = fib;
		if (i < target - 1)
			printf(", ");
	}
	putchar('\n');
}


/**
 * main - Entry point,
 *
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	print_fib_x50();
	return (0);
}

