/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:17:44 by rzaccari          #+#    #+#             */
/*   Updated: 2021/12/03 17:42:05 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t len)
{
	unsigned char	*str;
	int				i;

	str = ptr;
	i = 0;
	while (len--)
		str[i++] = val;
	return (ptr);
}
