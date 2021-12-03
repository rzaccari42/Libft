/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:49:16 by rzaccari          #+#    #+#             */
/*   Updated: 2021/12/03 16:03:54 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	int	i;
	int	strlen;

	if (!str)
		return (NULL);
	i = 0;
	strlen = ft_strlen(str);
	while (i < strlen)
	{
		f(i, &str[i])
		i++;
	}
}
