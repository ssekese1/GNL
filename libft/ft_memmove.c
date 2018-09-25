/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 08:02:29 by ssekese           #+#    #+#             */
/*   Updated: 2017/06/10 12:38:16 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*str1;
	unsigned const char	*str2;

	if (len <= 0)
		return (dest);
	str1 = (unsigned char *)dest;
	str2 = (unsigned const char *)src;
	if (str2 >= str1)
		ft_memcpy(str1, str2, len);
	else
	{
		while (len > 0)
		{
			str1[len - 1] = str2[len - 1];
			len--;
		}
	}
	return (str1);
}
