/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 23:57:03 by brumigue          #+#    #+#             */
/*   Updated: 2024/08/28 11:34:30 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

size_t	ft_strlen(const char *s);
int		ft_printf(const char *str, ...);
int		pf_check(char format, va_list ap);
int		pf_putchar(char c);
int		pf_putstr(char *s);
int		pf_putnbr(int n);
int		pf_put_unsigned_nbr(unsigned int n);
int		pf_print_hexa(unsigned long nb, int status);
int		pf_putnbr_base(unsigned long nbr, char *base);
int		pf_print_ptr(void *ptr);

#endif
