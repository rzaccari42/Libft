/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:22:03 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/10 14:57:50 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	while (*str1 && *str2 && len--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		*str1++;
		*str2++;
	}
	return (0);
}
