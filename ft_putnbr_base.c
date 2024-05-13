/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-oirg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:06:14 by zel-oirg          #+#    #+#             */
/*   Updated: 2023/12/13 23:07:35 by zel-oirg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long nbr, char *base)
{
	int		len_base;
	int		len;

	len_base = ft_strlen(base);
	len = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		return (ft_putnbr_base(-nbr, base) + 1);
	}
	if (nbr < len_base)
		return (ft_putchar(base[nbr]));
	else
	{
		len += ft_putnbr_base(nbr / len_base, base);
		return (len + ft_putnbr_base(nbr % len_base, base));
	}
}
