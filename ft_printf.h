/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-oirg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:25:47 by zel-oirg          #+#    #+#             */
/*   Updated: 2023/12/13 23:12:33 by zel-oirg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putnbr_base(long nbr, char *base);
size_t	ft_strlen(const char *str);
int		ft_putstr(char *str);
int		ft_putnbr_base_ptr(unsigned long long nbr, char *base);

#endif
