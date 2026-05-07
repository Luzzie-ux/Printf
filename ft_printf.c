/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:18:08 by rodrpere          #+#    #+#             */
/*   Updated: 2026/05/07 17:31:45 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list args;
	int	i;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				ft_putchar(va_arg(args, int));
			else if (str[i] == 's')
				ft_putstr(va_arg(args, char *));
			else if (str[i] == 'p')
				ft_putptr(va_arg(args, void *));
			else if (str[i] == 'd' || str[i] == 'i')
				ft_putnbr(va_arg(args, int));
			else if (str[i] == 'u')
				ft_putnbr(va_arg(args, unsigned long));
			else if(str[i] == 'x' || str[i] == 'X')
				ft_puthex(va_arg(args, unsigned long), str[i]);
			else if(str[i] == '%')
				ft_putchar('%');
		}
		i++;
	}
	va_end(args);
	return (0);
}
