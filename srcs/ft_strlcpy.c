/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 01:34:10 by rzaccari          #+#    #+#             */
/*   Updated: 2021/12/13 17:10:14 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	int		src_len;

	i = 0;
	src_len = ft_strlen((char *)src);
	if (len <= 0)
		return (src_len);
	while (i < (len - 1) && i < (size_t) src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (src_len);
}
