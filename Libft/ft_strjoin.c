/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 00:24:30 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/25 22:53:17 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*string;
	int		stringlen;
	int		i;

	if (!str1 || !str2)
		return (NULL);
	stringlen = ft_strlen(str1) + ft_strlen(str2) + 1;
	string = malloc(stringlen * sizeof(char));
	if (string == NULL)
		return (NULL);
	i = 0;
	while (*str1 != 0)
		string[i++] = *(str1++);
	while (*str2 != 0)
		string[i++] = *(str2++);
	string[i] = 0;
	return (string);
}
