/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 23:39:38 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/18 17:07:17 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;

	while (str[i])
	{
		if (str[i] == c)
			j = i;
		i++;
	}
	if (c == '\0')
		return ((char*)str + i);
	if (j == -1)
		return (NULL);
	return ((char*)str + j);
}
