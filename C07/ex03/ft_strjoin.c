/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:24:27 by donson            #+#    #+#             */
/*   Updated: 2023/09/07 17:21:11 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strslen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	j = 0;
	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	if (dest == 0 || src == 0)
		return (dest);
	while (src[i] != '\0')
	{
		dest[len] = src [i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	j = 0;
	i = 0;
	len = ft_strslen(size, strs, sep);
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	if (sep == 0 || strs == 0)
		return (0);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		i++;
		if (size != i)
			ft_strcat(str, sep);
	}
	str[len] = '\0';
	return (str);
}
