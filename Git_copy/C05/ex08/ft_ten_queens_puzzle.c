/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:27:24 by donson            #+#    #+#             */
/*   Updated: 2023/08/31 14:57:59 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_ten_queens_recursive(int *board, int *cnt, int queens);

void	ft_print_board(int *board)
{
	int		i;
	char	num;

	i = 0;
	while (i < 10)
	{
		num = board[i] + 48;
		write(1, &num, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * (-1));
}

void	ft_play(int *board, int *cnt, int queens)
{
	int	i;
	int	j;
	int	istrue;

	i = 0;
	while (i < 10)
	{
		istrue = 1;
		j = 0;
		while (j < queens)
		{
			if (board[j] == i || ft_abs(j - queens) == ft_abs(i - board[j]))
				istrue = 0;
			j++;
		}
		if (istrue)
		{
			board[queens] = i;
			ft_ten_queens_recursive(board, cnt, queens + 1);
		}
		i++;
	}
}

void	ft_ten_queens_recursive(int *board, int *cnt, int queens)
{
	if (queens == 10)
	{
		(*cnt)++;
		ft_print_board(board);
	}
	if (queens != 10)
		ft_play(board, cnt, queens);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	cnt;

	ft_ten_queens_recursive(board, &cnt, 0);
	return (cnt);
}
/*int	main()
{
	printf("%d", ft_ten_queens_puzzle());
	return (0);
}*/
