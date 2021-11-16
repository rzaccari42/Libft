/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:18:08 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/16 19:26:36 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (len <= i)
		return (len + ft_strlen(src));
	while (src[j] && i + j < (len - 1))
	{
		((unsigned char *)dst)[i + j] = ((unsigned char *)src)[j];
		j++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(src) + i);
}
