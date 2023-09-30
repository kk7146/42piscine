/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:33:21 by donson            #+#    #+#             */
/*   Updated: 2023/08/24 17:17:09 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int b)
{
	char	ca;
	char	cb;
	char	cc;
	char	cd;

	ca = 48 + a / 10;
	cb = 48 + a % 10;
	cc = 48 + b / 10;
	cd = 48 + b % 10;
	write(1, &ca, 1);
	write(1, &cb, 1);
	write(1, &" ", 1);
	write(1, &cc, 1);
	write(1, &cd, 1);
	if (a != 98 || b != 99)
		write(1, &", ", 2);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			print(a, b);
			b++;
		}
		a++;
	}
}
