/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:51:09 by donson            #+#    #+#             */
/*   Updated: 2023/08/28 14:56:42 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(to_find);
	if (!(len))
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
				j++;
			if (j == len)
				return (str + i);
		}
		i++;
	}
	return (0);
}
/*int main ()
{
	char a[30] = "abcdefghijk";
	char b[] = "ghi";
	char c[] = "gsq";
	printf("%s\n", ft_strstr(a, b));
	printf("%s", ft_strstr(a, c));
}*/
