/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 12:15:06 by caroua            #+#    #+#             */
/*   Updated: 2017/11/21 12:16:21 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char *end;
	char *begin;
	char k;

	end = str;
	begin = str;
	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (begin < end)
	{
		k = *end;
		*end = *begin;
		*begin = k;
		begin++;
		end--;
	}
	return (str);
}
