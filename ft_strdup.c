/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 13:37:24 by caroua            #+#    #+#             */
/*   Updated: 2017/11/18 20:48:38 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) + 1;
	j = 0;
	if ((dest = (char *)malloc(i * sizeof(dest))) == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		dest[j] = s1[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
