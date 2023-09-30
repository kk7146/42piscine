/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:49:15 by donson            #+#    #+#             */
/*   Updated: 2023/08/28 17:32:40 by donson           ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	len_s;

	i = 0;
	len = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size <= len || size == 0)
		return (len_s + size);
	while (src[i] != '\0' && size - 1 > len + i)
	{
		dest[len + i] = src [i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + len_s);
}
/*int main ()
{
	char a[20] = "abc";
	char b[] = "defgh";
	ft_strlcat(a, b, 5);
	printf("%s\n", a);
	ft_strlcat(a, b, 0);
	printf("%s\n", a);
	ft_strlcat(a, b, 2);
	printf("%s\n", a);
	ft_strlcat(a, b, 15);
	printf("%s\n", a);
	ft_strlcat(a, b, 8);
    printf("%s\n", a);
}*/
