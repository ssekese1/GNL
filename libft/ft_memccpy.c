/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:21:53 by ssekese           #+#    #+#             */
/*   Updated: 2017/06/10 12:36:08 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	s;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	s = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s1[i] == s)
			return (&s1[i + 1]);
		i++;
	}
	return (NULL);
}
