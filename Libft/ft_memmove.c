/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:25:53 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/05 21:01:00 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<libft.h>
#include<unistd.h>
#include<stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	const char	*temp = src;
	
	while (len--)
	{
		*(char*)dest++ = *(char*)temp++; 
	}
	return (dest);
}

int	main()
{
	char	source[] = "12345";
	char	dest[] = "abcde";

	printf("before\n");
	printf("source : %s\n", source);
	printf("destination : %s\n", dest);

	ft_memmove(dest, source, 20);

	printf("after\n");
	printf("source : %s\n", source);
	printf("destination : %s\n", dest);
}