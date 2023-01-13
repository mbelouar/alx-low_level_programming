#include "main.h"
#include <stdlib.h>

/**
 * _calloc - create and array using calloc
 * @nmemb: number elements.
 * @size: size of the type.
 *
 * Return: pointer to the memory.
 */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	char	*str;
	unsigned int	i;

	i = 0;
	str = malloc(nmemb * size);
	if (!str)
		return (0);
	while (i < size * nmemb)
		str[i++] = 0;
	return (str);
}
