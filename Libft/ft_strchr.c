/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:07:31 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/08 16:42:35 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<libft.h>
#include<string.h>
#include<stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != c)
	{
		if (!str[i])
		{
			return (0);
		}
		i++;
	}
	return ((char*)str + i);
}

int	main(void)
{
	char	str[] = "abcdef";
	int		c = 'o';

	printf("%s\n", ft_strchr(str, c));
	printf("%s", strchr(str, c));
}