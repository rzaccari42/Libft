/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:12:38 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/18 17:06:21 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	little_len;

	i = 0;
	j = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char*)big);
	while (i < (int)len && big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i] == little[j] && i < (int)len)
			{
				i++;
				j++;
			}
			if (j == little_len)
				return ((char*)big + (i - j));
			else if (i == (int)len)
				return (NULL);
			else
			{
				i -= j;
				i++;
			}
		}
		else
			i++;
	}
	return (NULL);
}
