/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:21:08 by donson            #+#    #+#             */
/*   Updated: 2023/09/08 18:05:33 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *)malloc(length * sizeof(int));
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
/*int square(int n)
{
	return (n * n);
}

#include <stdio.h>
int main()
{
	int a[] = {1, 2, 3, 4};
	int *result;

	result = ft_map(a, 4, &square);
	for (int i = 0; i < 4; i++)
		printf("%d, ", result[i]);
	printf("\n");
}*/