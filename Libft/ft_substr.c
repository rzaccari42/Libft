/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:01:03 by rzaccari          #+#    #+#             */
/*   Updated: 2021/12/03 17:40:29 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (str == NULL)
		return (NULL);
	if (len > ft_strlen(str + start))
		len = ft_strlen(str + start);
	substr = malloc(len + 1 * sizeof(char));
	if (substr == NULL)
		return (NULL);
	if (start > ft_strlen(str))
		return (substr);
	i = 0;
	while (*(str + start) != 0 && i < len)
		substr[i++] = *(str + start++);
	substr[i] = 0;
	return (substr);
}
