/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:42:44 by donson            #+#    #+#             */
/*   Updated: 2023/09/03 12:22:23 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_isspace(unsigned char c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	unsigned int	num;
	int				i;
	int				sign;
	unsigned char	*st;

	st = (unsigned char *)str;
	num = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(st[i]))
		i++;
	while (st[i] == '-' || st[i] == '+')
	{
		if (st[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (st[i] != '\0' && (st[i] >= '0' && st[i] <= '9'))
	{
		num = num * 10 + (st[i] - '0');
		i++;
	}
	return (sign * num);
}
/*int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d", ft_atoi(argv[1]));
}*/
