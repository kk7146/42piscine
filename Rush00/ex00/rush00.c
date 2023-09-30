/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeok <dongyeok@student.42seoul.kr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 08:55:01 by dongyeok          #+#    #+#             */
/*   Updated: 2023/08/27 12:13:54 by dongyeok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char a, char b, char c, int num)
{
	int	cnt;

	cnt = 1;
	while (cnt <= num)
	{
		if (cnt == 1)
			ft_putchar(a);
		else if (cnt == num)
			ft_putchar(c);
		else
			ft_putchar(b);
		cnt++;
	}		
}

void	rush(int x, int y)
{
	int	cnt;

	cnt = 1;
	if (x > 0 && y > 0)
	{
		while (cnt <= y)
		{
			if (cnt == 1 || cnt == y)
				print_line('o', '-', 'o', x);
			else
				print_line('|', ' ', '|', x);
			ft_putchar('\n');
			cnt++;
		}
	}
}
