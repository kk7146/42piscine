/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standard_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:31:40 by donson            #+#    #+#             */
/*   Updated: 2023/09/14 01:35:49 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "tool.h"

int	get_map_info2(char c, int count[3], char **buf, char **buf_buf)
{
	while (c != '\n')
	{
		if (count[1] != 0)
		{
			*buf_buf = f_strdup(*buf, count[1]);
		}
		*buf = (char *)malloc(sizeof(char) * (count[1] + 1));
		count[0] = -1;
		while (++count[0] <= count[1] && count[1] != 0)
			(*buf)[count[0]] = (*buf_buf)[count[0]];
		(*buf)[count[1]++] = c;
		count[2] = read(0, &c, 1);
		if (count[2] == -1 || count[2] == 0)
		{
			return (0);
		}
	}
	return (1);
}

char	*get_map_info(void)
{
	char	c;
	int		count[3];
	char	*buf;
	char	*buf_buf;

	count[1] = 0;
	count[2] = read(0, &c, 1);
	if (count[2] == -1 || count[2] == 0)
		return (0);
	if (!get_map_info2(c, count, &buf, &buf_buf))
		return (0);
	return (buf);
}

int	getinfo(char *info, int size[2], char characters[3])
{
	int	len;

	if (info == 0)
	{
		free(info);
		return (0);
	}
	len = f_strlen(info);
	if (len < 3)
	{
		free(info);
		return (0);
	}
	characters[0] = info[len - 3];
	characters[1] = info[len - 2];
	characters[2] = info[len - 1];
	len = ft_atoi_3(info, len - 3);
	if (len == 0)
	{
		free(info);
		return (0);
	}
	size[0] = len;
	free(info);
	return (1);
}

int	free_map(int size[2], char **map_buf)
{
	int	i;

	i = 0;
	while (i < size[0])
	{
		if (size[1] != f_strlen(map_buf[i++]))
		{
			free(map_buf[0]);
			free(map_buf);
			return (0);
		}
	}
	return (1);
}

int	arg1(char ***map, int size[2], char characters[3])
{
	char	*info;
	char	**map_buf;
	int		i;

	i = 0;
	info = get_map_info();
	if (!getinfo(info, size, characters))
		return (0);
	map_buf = (char **)malloc(size[0] * sizeof(char *));
	while (i < size[0])
	{
		map_buf[i++] = get_map_info();
		if (map_buf[i - 1] == NULL)
		{
			free(map_buf[0]);
			free(map_buf);
			return (0);
		}
	}
	size[1] = f_strlen(map_buf[0]);
	if (!free_map(size, map_buf))
		return (0);
	*map = map_buf;
	return (1);
}
