/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:52:22 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/18 16:11:00 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (len > str_len - (size_t)start)
		len = str_len - (size_t)start;
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, (s + start), len + 1);
	return (result);
}
