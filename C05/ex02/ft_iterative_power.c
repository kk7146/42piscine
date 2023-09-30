/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:25:29 by donson            #+#    #+#             */
/*   Updated: 2023/08/30 14:32:22 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	if (0 > power)
		return (0);
	while (i < power)
	{
		num *= nb;
		i++;
	}
	return (num);
}
/*int main()
{
	printf("%d", ft_iterative_power(3, -1));
}*/
