#include <stdio.h>

/**
 * main -  print name
 *@argc: int.
 *@argv: char.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", argc - 1);
	return (0);
}
