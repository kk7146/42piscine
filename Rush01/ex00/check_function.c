/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taekhkim <xorgh456@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:25:30 by taekhkim          #+#    #+#             */
/*   Updated: 2023/09/03 16:57:50 by taekhkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_matrix(int outside[16], int inside[4][4]);
int	check_column(int up, int down, int inside[4][4], int column_idx);

int	check_matrix(int outside[16], int inside[4][4])
{
	int	check;
	int	idx;

	check = 0;
	idx = 0;
	while (idx < 4)
	{
		check = check_column(outside[idx], outside[idx + 4], inside, idx);
		if (check == 0)
			return (0);
		idx++;
	}
	return (1);
}

int	check_column(int up, int down, int inside[4][4], int column_idx)
{
	int	count[5];

	count[0] = 1;
	count[1] = 1;
	count[2] = inside[0][column_idx];
	count[3] = inside[3][column_idx];
	count[4] = 0;
	while (count[4] < 4)
	{
		if (inside[count[4]][column_idx] > count[2])
		{
			count[0]++;
			count[2] = inside[count[4]][column_idx];
		}
		if (inside[3 - count[4]][column_idx] > count[3])
		{
			count[1]++;
			count[3] = inside[3 - count[4]][column_idx];
		}
		count[4]++;
	}
	if ((up == count[0]) && (down == count[1]))
		return (1);
	else
		return (0);
}
