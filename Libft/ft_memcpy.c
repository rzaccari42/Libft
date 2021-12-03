/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:40:32 by rzaccari          #+#    #+#             */
/*   Updated: 2021/12/03 17:35:47 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*dst;
	int				i;

	dst = dest;
	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);	
	while (len--)
		dst[i++] = *(const unsigned char*)src++;
	return (dest);
}
