/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:58:44 by donson            #+#    #+#             */
/*   Updated: 2023/08/25 19:29:06 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	istrue(char *Num, int n)
{
	int	i;

	i = 1;
	while (i < n)
	{
		if (Num[i - 1] >= Num[i])
			return (0);
		i++;
	}
	return (1);
}

void	print(char *Num, int n)
{
	int		i;

	if (istrue(Num, n))
	{
		i = 0;
		while (i < n)
		{
			write(1, &Num[i], 1);
			i++;
		}
		if (Num[0] < '9' + 1 - n)
			write(1, &", ", 2);
	}
}

void	ft_print_combn(int n)
{
	char	num[9];
	int		i;

	i = 0;
	while (i < n)
	{
		num[i] = '0' + i;
		i++;
	}
	while (num[0] <= '9' + 1 - n)
	{
		print(num, n);
		num[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (num[i] > '9')
			{
				num[i - 1]++;
				num[i] = '0';
			}
			i--;
		}	
	}
}
/*
int    main()
{
    ft_print_combn(4);
	return (0);
}*/
