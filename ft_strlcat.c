/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 21:32:53 by caroua            #+#    #+#             */
/*   Updated: 2017/11/18 21:36:22 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t length_d;
	size_t length_s;
	size_t i;

	length_d = ft_strlen(dst);
	length_s = ft_strlen(src);
	if (size <= length_d)
		return (length_s + size);
	else
	{
		i = 0;
		while (length_d + i < size - 1)
		{
			dst[length_d + i] = src[i];
			i++;
		}
		dst[length_d + i] = '\0';
		return (length_d + length_s);
	}
}
