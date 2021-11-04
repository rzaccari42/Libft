/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:17:44 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/04 01:25:25 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

void	*ft_memset(void *ptr, int val, size_t len)
{
	while (len--)
		*(char*)ptr++ = val;
	return (ptr);
}
