/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-oirg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 23:43:17 by zel-oirg          #+#    #+#             */
/*   Updated: 2023/12/13 23:08:44 by zel-oirg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_ptr(unsigned long long nbr, char *base)
{
	int		len_base;
	int		len;

	len_base = ft_strlen(base);
	len = 0;
	if (nbr < (unsigned long long)len_base)
		return (ft_putchar(base[nbr]));
	else
	{
		len += ft_putnbr_base_ptr(nbr / len_base, base);
		return (len + ft_putnbr_base_ptr(nbr % len_base, base));
	}
}