#include "main.h"
#include <stdlib.h>

/**
 * _memset - puts on all bytes the int c.
 * @str: string to fill
 * @c: the inter that we should fill the string with
 * @len: length that we want to fill.
 *
 * Return: Pointer filled with @c.
 */

void	*_memset(void *str, int c, size_t len)
{
	char	*cast_str;
	size_t	i;

	i = 0;
	cast_str = (char *)str;
	while (i < len)
	{
		cast_str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/**
 * _bzero - set all the bytes to 0.
 * @dst: pointer to propigate.
 * @size: of the memory per-byte.
 *
 * Return: pointer to memory area dst.
 */

void *_bzero(void *str, unsigned int size)
{
	_memset(str, '\0', size);
}

/**
 * _calloc - create and array using calloc
 * @nmemb: number elements.
 * @size: size of the type.
 *
 * Return: pointer to the memory.
 */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	void	*str;

	str = malloc(nmemb * size);
	if (!str)
		return (0);
	_bzero(str, nmemb * size);
	return (str);
}
