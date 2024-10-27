/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:52:22 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/18 12:54:27 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_num_length(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	int		ncpy;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ncpy = n;
	i = get_num_length(n);
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	res[i] = '\0';
	if (ncpy < 0)
	{
		res[0] = '-';
		ncpy = -n;
	}
	while (i-- > 0 && ncpy != 0)
	{
		res[i] = (ncpy % 10) + '0';
		ncpy /= 10;
	}
	if (n == 0)
		res[0] = '0';
	return (res);
}
