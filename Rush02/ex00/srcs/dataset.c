/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dataset.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:29:32 by donson            #+#    #+#             */
/*   Updated: 2023/09/10 17:57:23 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dataset.h"

void	dataset_up(t_dict *p, char **d, int *count)
{
	int	i;
	int	*ct;

	i = 0;
	ct = (int *)malloc(101 * sizeof(int));
	while (i < p->entry_num)
	{
		if (up(p->key_arr[i]))
		{
			d[up(p->key_arr[i])] = (char *)malloc((len(p->val_arr[i]) + 1) * 1);
			cpy(d[up(p->key_arr[i])], p->val_arr[i]);
			count[up(p->key_arr[i])] = 1;
		}
		i++;
	}
}

void	dataset_down(t_dict *p, char **c, int *count)
{
	int	i;

	i = 0;
	while (i < p->entry_num)
	{
		if ((is_key1_under(p->key_arr[i]) || is_key2_under(p->key_arr[i])
				|| is_key3_under(p->key_arr[i])))
		{
			c[ai(p->key_arr[i])] = (char *)malloc((len(p->val_arr[i]) + 1) * 1);
			cpy(c[ai(p->key_arr[i])], p->val_arr[i]);
			count[ai(p->key_arr[i])] = 1;
		}
		i++;
	}
}

int	data_count(int *count, int num)
{
	int	i;
	int	ct;

	i = 0;
	ct = 0;
	while (i < num)
	{
		if (count[i] == 1)
			ct++;
		i++;
	}
	return (ct);
}

int	dataset(t_dict *p, char ***a, char ***b)
{
	int		*count1;
	int		*count2;
	char	**c;
	char	**d;

	c = (char **)malloc(101 * sizeof(char *));
	count1 = (int *)malloc(101 * sizeof(int));
	d = (char **)malloc(13 * sizeof(char *));
	count2 = (int *)malloc(13 * sizeof(int));
	dataset_down(p, c, count1);
	dataset_up(p, d, count2);
	*a = c;
	*b = d;
	return (data_count(count1, 101) + data_count(count2, 13));
}
