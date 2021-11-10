/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:43:36 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/10 21:00:06 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include<string.h>
#include<stdio.h>

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

int main(void)
{
	const char s1[] = "AlloPolrd";
	const char s2[] = "AploPolrd";
	size_t len = 2;

	printf("%d\n", memcmp(s1, s2, len));
	printf("%d", ft_memcmp(s1, s2, len));
}