/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:04:29 by rodrpere          #+#    #+#             */
/*   Updated: 2026/05/07 17:36:59 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
int	ft_putnbr(long nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
	else
		ft_putchar(nbr + '0');
	return (0);
}
int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
		i++;
	return (write(1, s, i));
}

int	ft_puthex(unsigned long n, char format)
{
	int		mod;
	char	*hex;

	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (n > 15)
		ft_puthex(n / 16, format);
	mod = n % 16;
	ft_putchar(hex[mod]);
	return (0);
}

int	ft_putptr(void *ptr)
{
	unsigned long n;

	if (!ptr)
		return (ft_putstr("nil"));
	n = (unsigned long)ptr;
	ft_putstr("0x");
	ft_puthex(n, 'x');
	return (0);
}
