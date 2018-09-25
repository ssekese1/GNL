/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 12:34:39 by ssekese           #+#    #+#             */
/*   Updated: 2017/06/09 09:52:11 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *big, char *little)
{
	int i;
	int length;
	int i2;

	length = 0;
	while (little[length])
		length++;
	if (length == 0)
		return (big);
	i = 0;
	while (big[i])
	{
		i2 = 0;
		while (little[i2] != '\0' && (little[i2] == big[i + i2]))
		{
			i2++;
		}
		if (little[i2] == '\0')
			return (big + i);
		i++;
	}
	return (NULL);
}
