/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:25:53 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/18 15:41:47 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;

	if (dst == NULL && src == NULL)
		return (dst);
	if (src > dst)
		return (ft_memcpy(dst, src, len));
	i = (int)len - 1;
	while (i >= 0)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i--;
	}
	return (dst);
}
