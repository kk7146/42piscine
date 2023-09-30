/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:32:07 by donson            #+#    #+#             */
/*   Updated: 2023/09/07 16:38:02 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_char(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;
	int	count;

	count = 0;
	while (tab[count] != 0)
		count++;
	i = 0;
	while (i < count)
	{
		j = 0;
		while (j < count - i - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
				ft_swap_char(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
