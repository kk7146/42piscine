/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:39:05 by donson            #+#    #+#             */
/*   Updated: 2023/08/28 13:48:44 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
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
	char a[10] = "abc";
	char b[] = "defgh";
	printf("%s\n", ft_strncat(a, b, 2));
	printf("%s", ft_strncat(a, b, 3));
}*/
