#include "libftprintf.h"

static int	ft_intlen(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		++i;
	}
	return (i);
}

int	ft_printf_unint(unsigned int n)
{
	long	num;

	num = n;
	if (num < 0)
	{
		num = num + UINT_MAX + 1;
	}
	if ((num / 10) > 0)
	{
		ft_printf_int(num / 10);
	}
	ft_printf_char(num % 10 + '0');
	return (ft_intlen(n));
}
