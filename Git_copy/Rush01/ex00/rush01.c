/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taekhkim <xorgh456@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:41:28 by donson            #+#    #+#             */
/*   Updated: 2023/09/03 16:58:00 by taekhkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int array[4][4]);
int		check_matrix(int *outside, int inside[][4]);
void	possible_input(int possible_row[][6]);
int		check_magic(int inside[][4]);
int		istrue_(int *req);

int	case_idx(int i, int j)
{
	if ((i == 4) && (j == 1))
		return (0);
	if ((i == 3) && (j == 2))
		return (1);
	if ((i == 3) && (j == 1))
		return (2);
	if ((i == 2) && (j == 3))
		return (3);
	if ((i == 2) && (j == 2))
		return (4);
	if ((i == 2) && (j == 1))
		return (5);
	if ((i == 1) && (j == 3))
		return (6);
	if ((i == 1) && (j == 2))
		return (7);
	if ((i == 1) && (j == 4))
		return (8);
	return (9);
}

void	cpy(int table[4], int num)
{
	table[0] = num / 1000;
	table[1] = (num / 100) % 10;
	table[2] = (num / 10) % 10;
	table[3] = num % 10;
}

int	ft_while(int i[3], int table[4][4], int req[16], int *candidate_nums)
{
	int	possible_rows[9][6];

	possible_input(possible_rows);
	i[3] = -1;
	while (++i[3] < candidate_nums[case_idx(req[11], req[15])])
	{
		cpy(table[0], possible_rows[case_idx(req[8], req[12])][i[0]]);
		cpy(table[1], possible_rows[case_idx(req[9], req[13])][i[1]]);
		cpy(table[2], possible_rows[case_idx(req[10], req[14])][i[2]]);
		cpy(table[3], possible_rows[case_idx(req[11], req[15])][i[3]]);
		if (check_matrix(req, table) && check_magic(table))
		{
			ft_print(table);
			return (1);
		}
	}
	return (0);
}

void	can(int *a)
{
	a[0] = 1;
	a[1] = 3;
	a[2] = 3;
	a[3] = 3;
	a[4] = 6;
	a[5] = 2;
	a[6] = 3;
	a[7] = 2;
	a[8] = 1;
}

int	ft_rush01(int *req)
{
	int	table[4][4];
	int	i[4];
	int	candidate_nums[9];

	can(candidate_nums);
	if (istrue_(req))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i[0] = -1;
	while (++i[0] < candidate_nums[case_idx(req[8], req[12])])
	{
		i[1] = -1;
		while (++i[1] < candidate_nums[case_idx(req[9], req[13])])
		{
			i[2] = -1;
			while (++i[2] < candidate_nums[case_idx(req[10], req[14])])
				if (ft_while(i, table, req, candidate_nums))
					return (1);
		}
	}
	write(1, "Error\n", 6);
	return (0);
}
