/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:54:20 by donson            #+#    #+#             */
/*   Updated: 2023/08/24 20:31:27 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}
/*int main()
{
	int i = 0;
	int array[5];


	while (i < 5)
	{
		array[i] = i;
		i++;
	}
	ft_rev_int_tab(array, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d", array[i]);
		i++;
	}
}*/
