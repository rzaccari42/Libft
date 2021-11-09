/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:07:31 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/09 23:25:06 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char*)str + i);
		i++;
	}
	if (c == '\0')
		return ((char*)str + i);
	return (NULL);
}
