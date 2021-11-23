/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:42:31 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/23 23:59:03 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ischarset(char c, const char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *charset)
{
	char	*strtrim;
	int		start;
	int		end;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && ischarset(s[i], charset) == 1)
		i++;
	start = i;
	i = ft_strlen(s) - 1;
	while (i > 0 && ischarset(s[i], charset) == 1)
		i--;
	end = i;
	if (start > end)
	{
		strtrim = malloc(sizeof(char));
		*strtrim = 0;
		return (strtrim);
	}
	strtrim = malloc(((end - start) + 2) * sizeof(char));
	if (strtrim == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
		strtrim[i++] = s[start++];
	strtrim[i] = 0;
	return (strtrim);
}
