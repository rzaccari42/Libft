/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:01:03 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/24 00:19:04 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = malloc(len + 1 * sizeof(char));
	if (substr == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (substr);
	i = 0;
	while (*(s + start) != 0 && i < len)
		substr[i++] = *(s + start++);
	substr[i] = 0;
	return (substr);
}
