/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:49:28 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/24 18:19:38 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	**ft_split(const char *str, char c)
{
	char	**str_array;
	char	*str_temp;
	int		i;
	int		str_nbr;

	if (str[0] == c)
		str_nbr = -1;
	else
		str_nbr = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != 0)
		{
			str_nbr++;
		}
		i++;
	}
	str_array = malloc((str_nbr + 1) * sizeof(char*));
}

int	main()
{

}