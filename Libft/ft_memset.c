/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:17:44 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/03 16:26:36 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

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
