/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:43:07 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/30 13:43:59 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	len;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	write(fd, str, len);
}
