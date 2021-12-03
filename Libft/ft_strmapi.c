/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:06:15 by rzaccari          #+#    #+#             */
/*   Updated: 2021/12/03 15:43:32 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int		strlen;
	int		i;
	char	*s;

	if (!str)
		return (NULL);
	strlen = ft_strlen((char *)str);
	s = malloc(sizeof(char) * (strlen + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (i < strlen)
	{
		s[i] = f(i, str[i]);
		i++;
	}
	s[i] = '\0';
	return (s);
}
