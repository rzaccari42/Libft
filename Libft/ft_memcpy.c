/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:40:32 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/04 16:22:53 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	while (len--)
		*(char*)dest++ = *(const char*)src++;
	return (dest);
}
