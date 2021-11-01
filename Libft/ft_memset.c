/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 23:42:28 by rzaccari          #+#    #+#             */
/*   Updated: 2021/10/27 18:57:06 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memset(void *ptr, int val, size_t len)
{
    size_t	i;

	i = 0;
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		*(unsigned char*)(ptr + i) = *(unsigned char*)val;
		i++;
	}
	return (ptr);
}
