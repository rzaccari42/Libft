/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:48:45 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/02 22:00:35 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

size_t	ft_strlen(const char *str)
{
	size_t	cmp;

	cmp = 0;
	while (str[cmp])
		cmp++;
	return (cmp);
}