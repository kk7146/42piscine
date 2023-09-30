/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseuki <minseuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:42:12 by minseuki          #+#    #+#             */
/*   Updated: 2023/09/10 17:35:48 by minseuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_word(char **a, int i);

void	split(char *input, int *i_s, char **num0_100);

int	check_error(char *input, int len)
{
	if (input[0] == '0')
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (len >= 40)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	return (0);
}

int	check(char *input, int curr, int written)
{
	int	i;

	i = 0;
	while (i++ < written)
	{
		if (input[curr - i] != '0')
		{
			return (1);
		}
	}
	return (0);
}

void	split_print(char *input, char **num0_100, char **num1000)
{
	int	len;
	int	i_s[2];
	int	written;

	i_s[0] = 0;
	len = 0;
	while (input[len])
		len++;
	if (check_error(input, len))
		return ;
	i_s[1] = len % 3;
	if (i_s[1] == 0)
		i_s[1] = 3;
	len = (len - 1) / 3;
	while (len > -1)
	{
		written = i_s[1];
		split(input, i_s, num0_100);
		if (check(input, i_s[0], written))
			print_word(num1000, len);
		i_s[1] = 3;
		len--;
	}
	write(1, "\b", 1);
	write(1, "\n", 1);
}
