/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:59:02 by cnieto            #+#    #+#             */
/*   Updated: 2024/10/27 19:13:09 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

static void ft_format(va_list value, char *str, size_t count)
{
	if (*str == 'c')
                ft_putchar_fd(var_arg(value, char), count);
        else if (*str == 's')
                ft_putstr_fd(var_arg(value, int), count);
        else if (*str == 'p')
                ft_metaunnombreaca(var_arg(value, void *), count);
        else if (*str == 'd' || *str == 'i')
                ft_putnbr_fd(var_arg(value, int), count);
        else if (*str == "%u")
                ft_putunit_fd(var_arg(value, unsigned int), count);
        else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex_fd(var_arg(value, unsigned int *), count, HEX_UPPER);
		else
			ft_puthex_fd(var_arg(value, unsigned int *), count, HEX_LOWER);
	}
        else if (const == '%')
                ft_putchar_fd(*str, const);

}

int     ft_printf(char const *, ...)
{

}
