/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:08:35 by donson            #+#    #+#             */
/*   Updated: 2023/08/24 18:29:07 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmpd;
	int		tmpm;

	if (*b)
	{
		tmpd = *a / *b;
		tmpm = *a % *b;
		*a = tmpd;
		*b = tmpm;
	}
}
/*int		main()
{
	int a, b;
	a = 10, b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
	return (0);
}*/
