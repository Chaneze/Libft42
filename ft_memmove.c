/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 12:56:58 by caroua            #+#    #+#             */
/*   Updated: 2017/11/18 20:47:16 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	while (i < n)
	{
		tmp[i] = ((unsigned char *)src)[i];
		((unsigned char *)dst)[i] = tmp[i];
		i++;
	}
	((unsigned char *)dst)[i] = '\0';
	return ((unsigned char *)dst);
}
