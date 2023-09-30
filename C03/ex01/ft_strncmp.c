/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:11:24 by donson            #+#    #+#             */
/*   Updated: 2023/08/28 17:29:05 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
/*int main ()
{
	char a[] = "aaa";
	char b[] = "aaa";
	char c[] = "aab";
	printf("%d", ft_strncmp(a, b, 3));
	printf("%d", ft_strncmp(a, c, 3));
	printf("%d", ft_strncmp(c, a, 3));
	printf("%d", ft_strncmp(c, a, 2));
}*/
