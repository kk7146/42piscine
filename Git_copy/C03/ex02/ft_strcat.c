/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:24:48 by donson            #+#    #+#             */
/*   Updated: 2023/08/28 13:38:11 by donson           ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[len] = src [i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
/*int main ()
{
	char a[10] = "aaa";
	char b[] = "aaa";
	char c[] = "aab";
	printf("%s\n", ft_strcat(a, b));
	printf("%s", ft_strcat(a, c));
}*/
