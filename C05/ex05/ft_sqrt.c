/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:21:10 by donson            #+#    #+#             */
/*   Updated: 2023/08/30 19:52:11 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long int	result;
	long long int	num;

	num = nb;
	if (num <= 0)
		return (0);
	if (num == 1)
		return (1);
	result = 2;
	if (num >= 2)
	{
		while (result * result <= num)
		{
			if (result * result == num)
				return (result);
			result++;
		}
	}
	return (0);
}
/*int main()
{
	ft_sqrt(2147483647);
}*/
