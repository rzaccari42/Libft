/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:49:28 by rzaccari          #+#    #+#             */
/*   Updated: 2021/12/03 17:39:12 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>

static int	ft_wordlen(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	ft_count_word(char const *str, char c)
{
	_Bool	is_in_word;
	int		i;
	int		word_count;

	i = -1;
	is_in_word = false;
	word_count = 0;
	if (c == '\0' && str[0] == '\0')
		return (0);
	else if (c == '\0')
		return (1);
	while (str[++i])
	{
		if (str[i] == c)
			is_in_word = false;
		else
		{
			if (!is_in_word)
			{
				is_in_word = true;
				word_count++;
			}
		}
	}
	return (word_count);
}

static char	**ft_free_res(char **res, int words)
{
	int	i;

	i = 0;
	if (!res)
		return (NULL);
	while (i < words)
	{
		if (res[i])
			free(res[i++]);
	}
	free(res);
	return (NULL);
}

static char	**ft_fill_res(char const *str, char c, char ***res, int word_count)
{
	int		i;
	int		j;
	_Bool	is_in_word;

	i = -1;
	j = 0;
	is_in_word = false;
	while (j < word_count)
	{
		if (str[++i] == c)
		{
			is_in_word = false;
			continue ;
		}
		if (!is_in_word)
		{
			is_in_word = true;
			(*res)[j] = malloc(sizeof(char) * (ft_wordlen(&str[i], c) + 1));
			if (!(*res)[j])
				return (ft_free_res(*res, (j - 1)));
			ft_strlcpy((*res)[j++], &str[i], (ft_wordlen(&str[i], c) + 1));
		}
	}
	return (*res);
}

char	**ft_split(char const *str, char c)
{
	int		word_count;
	char	**res;

	if (!str)
		return (NULL);
	word_count = ft_count_word(str, c);
	res = malloc(sizeof(char *) * (word_count + 1));
	if (!res)
		return (NULL);
	res = ft_fill_res(str, c, &res, word_count);
	res[word_count] = NULL;
	return (res);
}
