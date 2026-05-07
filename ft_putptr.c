/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 17:06:06 by rodrpere          #+#    #+#             */
/*   Updated: 2026/05/07 12:51:20 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr)
{
	unsigned long n;

	if (!ptr)
		ft_putstr("nil");
	n = (unsigned long)ptr;
	ft_putstr("0x");
	ft_puthex(n, 'x');
}
