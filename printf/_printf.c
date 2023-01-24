#include "main.h"

/**
 * ft_fill - fill the string based on the specific format that we give after %.
 * @format: Character string to print - may contain directives.
 * @len: the length of what we print.
 *
 * Return: The length of characters printed.
 */

int ft_fill (const char *format, va_list ptr, int i)
{
	int len;

	len = 0;
	if (format[i] == 'c')
		len += _putchar(va_arg(ptr, int));
	else if (format[i] == 'd' || format[i] == 'i')
		len += _putnbr(va_arg(ptr, int));
	else if (format[i] == 's')
		len += _putstr(va_arg(ptr, char *));
	else if (format[i] == '%')
		len += write(1, "%", 1);
	return (len);
}

/**
 * _printf - Outputs a formatted string.
 * @format: Character string to print - may contain directives.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	int	i;
	int	len;

	va_list ptr;

	i = 0;
	len = 0;
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i += 1;
			len += ft_fill(format, ptr, i);
		}
		else
			len += _putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (len);
}
