/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-oirg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 23:47:49 by zel-oirg          #+#    #+#             */
/*   Updated: 2023/12/13 23:05:08 by zel-oirg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_specifer(char c, va_list args)
{
	if (c != '\0')
	{
		if (c == 'c')
			return (ft_putchar((char)va_arg(args, int)));
		else if (c == 's')
			return (ft_putstr((char *)va_arg(args, char *)));
		else if (c == 'p')
			return (ft_putstr("0x") + ft_putnbr_base_ptr((unsigned long long)
					va_arg(args, char *), "0123456789abcdef"));
		else if (c == 'd' || c == 'i')
			return (ft_putnbr_base((int)va_arg(args, unsigned int)
					, "0123456789"));
		else if (c == 'u')
			return (ft_putnbr_base((long)va_arg(args, unsigned int)
					, "0123456789"));
		else if (c == 'x')
			return (ft_putnbr_base((long)va_arg(args, unsigned int),
					"0123456789abcdef"));
		else if (c == 'X')
			return (ft_putnbr_base((long)va_arg(args, unsigned int),
					"0123456789ABCDEF"));
		else
			return (ft_putchar(c));
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (write(1, "", 0) < 0)
		return (-1);
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			count += ft_putchar(*format);
		else
		{
			format++;
			if (*format == '\0')
				break ;
			count += format_specifer(*format, args);
		}
		if (*format != '\0')
			format++;
	}
	va_end(args);
	return (count);
}
