#include "main.h"

/**
 * ft_len_nbr: calculate the length of the integer that we need to print.
 *
 * Return: the Length of nb.
 */

int	ft_len_nbr(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

/**
 * _putnbr: print a given integer.
 *
 * Return: The intger nb.
 */

int	_putnbr(int nb)
{
	int	tmp;

	tmp = ft_len_nbr(nb);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb < 0)
	{
		nb *= -1;
		_putchar('-');
		_putnbr(nb);
	}
	else if (nb > 9)
	{
		_putnbr(nb / 10);
		_putnbr(nb % 10);
	}
	else
		_putchar(nb + '0');
	return (tmp);
}
