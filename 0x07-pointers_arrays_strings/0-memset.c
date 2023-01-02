#include "main.h"

/**
 *_memset -   fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: value to set
 *@n: bytes of the memory
 *
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
