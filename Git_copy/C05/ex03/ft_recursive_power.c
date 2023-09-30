/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:33:07 by donson            #+#    #+#             */
/*   Updated: 2023/08/30 14:39:45 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_recursive_power(int nb, int power)
{
	if (0 > power)
		return (0);
	if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*int main()
{
	printf("%d", ft_recursive_power(3, 3));
}*/
