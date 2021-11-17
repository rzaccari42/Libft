/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:42:45 by rzaccari          #+#    #+#             */
/*   Updated: 2021/11/17 17:31:47 by rzaccari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		len;

	len = nmemb * size;
	ptr = malloc(len);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, len);
	return (ptr);
}
