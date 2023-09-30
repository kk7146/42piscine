/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:47:02 by donson            #+#    #+#             */
/*   Updated: 2023/09/13 23:05:03 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

int	check(char	**map, int	*size, char	*characters)
{
	int	i;
	int	j;
	int	line;

	j = 0;
	if (characters[0] == characters[1] || characters[1] == characters[2]
		|| characters[0] == characters[2])
		return (0);
	while (j < size[0])
	{
		i = 0;
		line = f_strlen(map[i]);
		if (line != size[1])
			return (0);
		while (i < line)
		{
			if (map[j][i] == characters[0]
			|| map[j][i] == characters[1])
				i++;
			else
				return (0);
		}
		j++;
	}
	return (1);
}
