#include "libftprintf.h"

int	ft_printf_str(char *str)
{
	int	len;

	if (str == NULL)
		str = ("(null)");
	len = ft_strlen(str);
	while (*str)
	{
		ft_printf_char(*str);
		str++;
	}
	return (len);
}
