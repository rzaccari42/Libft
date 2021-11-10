/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:10:11 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/10 17:09:02 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include<string.h>
#include<stdio.h>

void	*ft_memchr(const void *str, int c, size_t len)
{
	while (len--)
	{
		if (*(unsigned char*)str == (unsigned char)c)
			return ((void*)str);
		*(unsigned char*)str++;
	}
	return (NULL);
}

int	main()
{
	char	str[] = "Hello World";
	int		c = 'x';
	size_t	len = 10;
	char *ptr1 = memchr(str, c, len);
	char *ptr2 = ft_memchr(str, c, len);

	printf("%s\n", ptr1);
	printf("%s", ptr2);
}
