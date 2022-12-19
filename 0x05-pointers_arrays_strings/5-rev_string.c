#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int i, final_len, len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	
	final_len = len - 1;
	i = 0;
	while (i < len)
	{
		tmp = s[i];
		s[i] = s[final_len];
		s[final_len] = tmp;
		final_len--;
	}
}
