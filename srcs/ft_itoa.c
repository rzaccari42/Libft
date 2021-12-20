/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:59:40 by raphzer           #+#    #+#             */
/*   Updated: 2021/12/15 19:28:45 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrlen(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr /= -10;
		i = 2;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		i;

	str = malloc((nbrlen(nbr) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = nbrlen(nbr);
	str[i] = 0;
	if (nbr < 0)
	{
		str[0] = '-';
		str[--i] = -(nbr % 10) + 48;
		if (nbr < -9)
			nbr /= -10;
	}
	if (nbr == 0)
		str[--i] = (nbr % 10) + 48;
	while (nbr > 0)
	{
		str[--i] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (str);
}
