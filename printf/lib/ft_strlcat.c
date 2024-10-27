/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:15:53 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/18 15:53:57 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	len_dest = 0;
	len_src = 0;
	while (src[len_src])
		len_src++;
	while (dest[len_dest] && len_dest < size)
		len_dest++;
	if (size <= len_dest)
		return (size + len_src);
	if (size != 0)
	{
		while (src[i] && (len_dest + i) < (size - 1))
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		dest[len_dest + i] = '\0';
	}
	return (len_dest + len_src);
}
