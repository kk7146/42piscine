/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:46:09 by donson            #+#    #+#             */
/*   Updated: 2023/08/28 13:10:33 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

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
/*int main ()
{
	char a[] = "aaa";
	char b[] = "aaa";
	char c[] = "aab";
	printf("%d", ft_strcmp(a, b));
	printf("%d", ft_strcmp(a, c));
	printf("%d", ft_strcmp(c, a));
}*/
