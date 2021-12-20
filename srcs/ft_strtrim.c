/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:42:31 by rzaccari          #+#    #+#             */
/*   Updated: 2021/12/13 19:07:02 by rzaccari         ###   ########.fr       */
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

static int	skip_start_charset(const char *str, const char *charset)
{
	int	i;
	int	start;

	i = 0;
	while (str[i] && ischarset(str[i], charset) == 1)
		i++;
	start = i;
	return (start);
}

static int	skip_end_charset(const char *str, const char *charset)
{
	int	i;
	int	end;

	i = ft_strlen(str) - 1;
	while (i > 0 && ischarset(str[i], charset) == 1)
		i--;
	end = i;
	return (end);
}

char	*ft_strtrim(const char *str, const char *charset)
{
	char	*strtrim;
	int		start;
	int		end;
	int		i;

	if (!str)
		return (NULL);
	start = skip_start_charset(str, charset);
	end = skip_end_charset(str, charset);
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
		strtrim[i++] = str[start++];
	strtrim[i] = 0;
	return (strtrim);
}
