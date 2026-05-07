/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 17:05:04 by rodrpere          #+#    #+#             */
/*   Updated: 2026/05/07 12:15:56 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long n, char format)
{
	int		mod;
	int		quo;
	char	*hex;

	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (n > 16)
	{
		quo = n / 16;
		ft_puthex(quo, format);
	}
	mod = n % 16;
	ft_putchar(hex[mod]);
}
