/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 21:34:24 by caroua            #+#    #+#             */
/*   Updated: 2017/11/18 21:38:32 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n < 0)
		return (ft_strcmp(s1, s2));
	if (n == 0)
		return (0);
	else if (s1[i] != '\0' && s2[i] != '\0')
	{
		while (s1[i] && (s1[i] == s2[i]) && i < n)
		{
			i++;
		}
		if (i == n)
			return (s2[i - 1] - s2[i - 1]);
		return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
