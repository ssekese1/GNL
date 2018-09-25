/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:18:58 by ssekese           #+#    #+#             */
/*   Updated: 2017/06/10 07:41:53 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	t;

	s = (unsigned char *)b;
	t = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		s[i] = t;
		i++;
	}
	return (s);
}
