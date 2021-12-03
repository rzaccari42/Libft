/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:17:44 by rzaccari          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/11/18 16:55:55 by rzaccari         ###   ########.fr       */
=======
/*   Updated: 2021/12/03 17:25:09 by rzaccari         ###   ########.fr       */
>>>>>>> ft_memset
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
