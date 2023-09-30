/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:42:58 by donson            #+#    #+#             */
/*   Updated: 2023/09/10 17:57:26 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

int	cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (1);
			if (s1[i] < s2[i])
				return (-1);
		}
		i++;
	}
	return (0);
}

int	ft_isspace(unsigned char c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

int	ai(char *str)
{
	unsigned int	num;
	int				i;
	unsigned char	*st;

	st = (unsigned char *)str;
	num = 0;
	i = 0;
	while (ft_isspace(st[i]))
		i++;
	if (st[i] == '+')
		i++;
	while (st[i] != '\0' && (st[i] >= '0' && st[i] <= '9'))
	{
		num = num * 10 + (st[i] - '0');
		i++;
	}
	return (num);
}

int	len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*cpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
