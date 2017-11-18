/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 13:23:20 by caroua            #+#    #+#             */
/*   Updated: 2017/11/18 20:48:00 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n <= 0)
	{
		return (0);
	}
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (((unsigned char *)s1)[i - 1] - ((unsigned char *)s2)[i - 1]);
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
