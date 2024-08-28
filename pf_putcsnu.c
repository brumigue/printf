/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putcnsu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:18:29 by brumigue          #+#    #+#             */
/*   Updated: 2024/08/28 11:18:08 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_putchar(char c)
{
	return (write(1, &c, 1));
}

int	pf_putstr(char *s)
{
	if (!s)
		return (pf_putstr("(null)"));
	return (write(1, &*s, ft_strlen(s)));
}

int	pf_putnbr(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += pf_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		count += pf_putnbr(nb / 10);
	count += pf_putchar((nb % 10) + '0');
	return (count);
}

int	pf_put_unsigned_nbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += pf_putnbr(n / 10);
	count += pf_putchar((n % 10) + '0');
	return (count);
}
