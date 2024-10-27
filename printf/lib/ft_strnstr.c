/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:39:44 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/18 15:58:39 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	size = ft_strlen(to_find);
	if (size == 0)
		return ((char *)str);
	while ((i < len && str[i] != 0) && (size + i <= len))
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == 0)
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
