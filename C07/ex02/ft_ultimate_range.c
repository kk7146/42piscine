/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:33:44 by donson            #+#    #+#             */
/*   Updated: 2023/09/06 14:35:52 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int				i;
	int				*num;
	unsigned int	result;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	result = (unsigned int)(max - min);
	num = (int *)malloc(result * sizeof(unsigned int));
	if (!num)
		return (-1);
	while (min + i < max)
	{
		num[i] = min + i;
		i++;
	}
	*range = num;
	return (max - min);
}
