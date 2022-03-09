#include "libftprintf.h"

int	ft_printf_void(size_t pntr, char c)
{
	int					len;

	write(1, "0x", 2);
	len = ft_printf_hexa(pntr, c);
	return (len + 2);
}
