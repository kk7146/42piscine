/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:32:33 by donson            #+#    #+#             */
/*   Updated: 2023/09/02 16:51:54 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/
int	*ft_range(int min, int max)
{
	int	*num;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	num = (int *)malloc((max - min) * sizeof(*num));
	if (!num)
		return (0);
	while (min < max)
	{
		num[i] = min;
		min++;
		i++;
	}
	return (num);
}
/*int	main()
{
	int	i = 0;
	int	*num = ft_range(-2, 7);
	while (i < 9)
	{
		printf("%d", num[i]);
		i++;
	}
	free(num);
}*/
