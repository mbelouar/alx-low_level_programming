#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated string.
 * @str: string to allocate memory for.
 *
 * Return: Pointer to string in memory.
 */

char	*_strdup(char *str)
{
	char	*dest;
	int	len;
	int	i;

	i = 0;
	len = 0;
	if (str == 0)
		return (0);
	while (str[len])
	{
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
