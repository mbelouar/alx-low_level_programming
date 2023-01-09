#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string.
 * @str: string to calculate his length.
 *
 * Return: Length of the string.
 */

int	_strlen(char *str)
{
	int	i;
		
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - function that returns a pointer to a newly allocated string.
 * @str: string to allocate memory for.
 *
 * Return: Pointer to string in memory.
 */

char	*_strdup(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * _strlen(str) + 1);
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
