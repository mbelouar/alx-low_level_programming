#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - a pointer to the first occurence.
 *         If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++:
	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}
