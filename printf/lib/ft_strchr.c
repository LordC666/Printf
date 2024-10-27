/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:15:53 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/18 14:07:38 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	j;

	i = 0;
	j = (unsigned char)c;
	while (str[i])
	{
		if ((unsigned char)str[i] == j)
			return ((char *)&str[i]);
		i++;
	}
	if (j == '\0')
		return ((char *)&str[i]);
	return (0);
}
