/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:22:03 by rzaccari          #+#    #+#             */
/*   Updated: 2021/12/03 17:39:50 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (*str1 && *str2 && (*str1 == *str2) && i < (n - 1))
	{
		str1++;
		str2++;
		i++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
