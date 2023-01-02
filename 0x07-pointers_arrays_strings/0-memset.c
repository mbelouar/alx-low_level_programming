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
	char	*cast_str;
	size_t	i;

	i = 0;
	cast_str = (char *)s;
	while (i < n)
	{
		cast_str[i] = (unsigned char)b;
		i++;
	}
	return (s);
}
