/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:52:22 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/18 14:12:46 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	len = ft_strlen(str);
	ptr = malloc(len + 1);
	if ((!str) || (!ptr))
		return (0);
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
