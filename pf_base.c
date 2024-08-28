/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:00:38 by brumigue          #+#    #+#             */
/*   Updated: 2024/08/28 11:27:57 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	pf_putnbr_base(unsigned long nb, char *base)
{
	unsigned int			size_base;
	int						count;

	count = 0;
	size_base = ft_strlen(base);
	if (nb >= size_base)
		count += pf_putnbr_base(nb / size_base, base);
	count += pf_putchar(base[nb % size_base]);
	return (count);
}

int	pf_print_hexa(unsigned long nb, int status)
{
	if (status)
		return (pf_putnbr_base(nb, "0123456789abcdef"));
	return (pf_putnbr_base(nb, "0123456789ABCDEF"));
}

int	pf_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!(size_t)ptr)
		count += pf_putstr("(nil)");
	else
	{
		count += pf_putstr("0x");
		count += pf_print_hexa((unsigned long)ptr, 1);
	}
	return (count);
}
