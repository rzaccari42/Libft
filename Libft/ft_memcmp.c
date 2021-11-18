/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:43:36 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/18 17:17:24 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	while (len--)
	{
		if (*(char*)str1 != *(char*)str2)
			return (*(char*)str1 - *(char*)str2);
	str1++;
	str2++;
	}
	return (0);
}
