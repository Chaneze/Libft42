/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 18:40:16 by caroua            #+#    #+#             */
/*   Updated: 2017/11/18 18:59:18 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_nb_w(char const *s, char c)
{
	int i;
	int word;
	int count;

	i = 0;
	word = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c)
		{
			i++;
			word = 1;
		}
		if (s[i] == c)
		{
			i++;
		}
		if (word == 1)
		{
			count++;
			word = 0;
		}
	}
	return (count);
}

int		ft_str(char *s, char c, int i)
{
	int length;

	length = 0;
	while (s[i] != c)
	{
		length++;
		i++;
	}
	return (length);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((dest = (char **)malloc(sizeof(dest) * (ft_nb_w(s, c) + 1))) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			k = 0;
			if (dest[j] = malloc(sizeof(*dest) * (ft_s(s, c, i) + 1)) == NULL)
				return (NULL);
			while (s[i] != c)
				dest[j][k++] = s[i++];
			dest[j++][k] = '\0';
		}
	}
	dest[j] = NULL;
	return (dest);
}
