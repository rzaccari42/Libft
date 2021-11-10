/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:12:38 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/11 00:40:36 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include<string.h>
#include<stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
}

int	main()
{
	char big[] = "super smash bros";
	char little[] = "smash";
	size_t len = 10;

	printf("%s", ft_strnstr(big, little, len));

}