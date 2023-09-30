/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmagic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taekhkim <xorgh456@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:24:02 by taekhkim          #+#    #+#             */
/*   Updated: 2023/09/03 16:57:53 by taekhkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_magic(int inside[][4]);
int	check_row(int inside[]);
int	check_column_magic(int inside[][4], int columnnum);

int	check_magic(int inside[][4])
{
	int	idx;

	idx = 0;
	while (idx < 4)
	{
		if (0 == check_row(inside[idx]))
			return (0);
		idx++;
	}
	idx = 0;
	while (idx < 4)
	{
		if (0 == check_column_magic(inside, idx))
			return (0);
		idx++;
	}
	return (1);
}

int	check_row(int inside[])
{
	int		i;
	char	check[4];

	i = 0;
	while (i < 4)
	{
		check[i] = '0';
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (1 <= inside[i] && inside[i] <= 4)
			check[inside[i] - 1] = '1';
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (check[i] != '1')
			return (0);
		i++;
	}
	return (1);
}

int	check_column_magic(int inside[][4], int columnnum)
{
	int		i;
	char	check[4];

	i = 0;
	while (i < 4)
	{
		check[i] = '0';
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (1 <= inside[i][columnnum] && inside[i][columnnum] <= 4)
			check[inside[i][columnnum] - 1] = '1';
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (check[i] != '1')
			return (0);
		i++;
	}
	return (1);
}
