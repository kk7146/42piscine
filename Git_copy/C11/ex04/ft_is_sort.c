/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:44:05 by donson            #+#    #+#             */
/*   Updated: 2023/09/06 14:14:39 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascend;
	int	descend;

	ascend = 1;
	descend = 1;
	i = 0;
	while (i < length - 1 && ascend)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			ascend = 0;
		i++;
	}
	i = 0;
	while (i < length - 1 && descend)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			descend = 0;
		i++;
	}
	if (ascend || descend)
		return (1);
	else
		return (0);
}
/*int        ft_tri(int a, int b)
{
    return (a - b);
}

#include <stdio.h>
int main()
{
    int i[] = {5,4,3,2,1,0};
    printf("%d", ft_is_sort(i, 6, &ft_tri));
}*/
