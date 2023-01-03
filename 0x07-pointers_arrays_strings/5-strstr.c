#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: a pointer to the beginning of a substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] != '\0' && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			++j;
		}
		++i;
	}
	return (0);
}
