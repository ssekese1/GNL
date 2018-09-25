/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 22:33:20 by ssekese           #+#    #+#             */
/*   Updated: 2017/06/22 08:53:25 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_cpy_contents(int const fd, char **stack)
{
	char	*buff;
	char	*temp;
	int		count;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	count = read(fd, buff, BUFF_SIZE);
	if (count > 0)
	{
		buff[count] = '\0';
		temp = ft_strjoin(*stack, buff);
		*stack = temp;
	}
	free(buff);
	if (count == -1)
		return (-1);
	if (count == 0 && !buff)
		return (0);
	return (count);
}

int			get_next_line(const int fd, char **line)
{
	static char	*str = NULL;
	int			i;
	char		*feed;

	if ((!str && (str = (char*)malloc(sizeof(*str))) == NULL)
			|| !line || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	feed = ft_strchr(str, '\n');
	while (feed == '\0')
	{
		i = ft_cpy_contents(fd, &str);
		if (i == 0)
		{
			if (ft_strlen(str) == 0)
				return (0);
			str = ft_strjoin(str, "\n");
		}
		if (i < 0)
			return (-1);
		else
			feed = ft_strchr(str, '\n');
	}
	*line = ft_strsub(str, 0, feed - str);
	str = ft_strdup(feed + 1);
	return (1);
}
