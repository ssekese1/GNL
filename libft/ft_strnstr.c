/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 09:15:02 by ssekese           #+#    #+#             */
/*   Updated: 2017/06/10 12:39:22 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t i;
	size_t length;
	size_t i2;

	length = 0;
	while (little[length] != '\0')
		length++;
	if (length == 0)
		return (big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		i2 = 0;
		while (little[i2] != '\0' && (little[i2] == big[i + i2]))
		{
			i2++;
		}
		if (little[i2] == '\0' && ((i + i2) <= len))
			return (big + i);
		i++;
	}
	return (NULL);
}
