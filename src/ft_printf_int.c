#include "libftprintf.h"

static int	ft_intlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n = n / 10;
		++i;
	}
	return (i);
}

int	ft_printf_int(int n)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_printf_char('-');
		num = num * -1;
	}
	if ((num / 10) > 0)
	{
		ft_printf_int(num / 10);
	}
	ft_printf_char(num % 10 + '0');
	return (ft_intlen(n));
}
