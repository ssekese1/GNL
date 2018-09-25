/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 10:00:08 by ssekese           #+#    #+#             */
/*   Updated: 2017/06/10 12:49:24 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (str[i] && i < n - 1)
	{
		if (str[i] != ch)
			i++;
		else
			return (&str[i]);
	}
	if (str[i] == ch)
	{
		return (&str[i]);
	}
	return (NULL);
}
