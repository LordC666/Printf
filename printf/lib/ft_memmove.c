/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:15:53 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/18 13:21:50 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n;
	if (!dest && !src && n > 0)
		return (NULL);
	if (src < dest)
	{
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
