/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:37:49 by donson            #+#    #+#             */
/*   Updated: 2023/08/24 21:10:18 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size -1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
/*int main()
{
	int ar[8] = {5,3,2,4,1,8,7,6};
	int i = 0;

	ft_sort_int_tab(ar, 8);
	while (i < 8)
	{
		printf("%d", ar[i]);
		i++;
	}
}*/
