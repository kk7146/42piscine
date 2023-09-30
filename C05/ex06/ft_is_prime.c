/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:57:49 by donson            #+#    #+#             */
/*   Updated: 2023/09/03 14:02:53 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	printf("%d\n", ft_is_prime(202));
	printf("%d\n", ft_is_prime(4219));
	printf("%d\n", ft_is_prime(7853));
	printf("%d\n", ft_is_prime(78989));
	printf("%d\n", ft_is_prime(2147483647));
}*/
