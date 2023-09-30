/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseuki <minseuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:42:02 by minseuki          #+#    #+#             */
/*   Updated: 2023/09/10 17:17:11 by minseuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_word(char **a, int i)
{
	int	word_len;

	word_len = 0;
	if (i == 0)
		return ;
	while (a[i][word_len])
		word_len++;
	write(1, a[i], word_len);
	write(1, " ", 1);
}

void	digit_3(char *input, int *i_s, char **num0_100)
{
	if (input[i_s[0]] == '0')
	{
		i_s[1] -= 1;
		i_s[0] += 1;
		return ;
	}
	print_word(num0_100, input[i_s[0]] - '0');
	print_word(num0_100, 100);
	i_s[1] -= 1;
	i_s[0] += 1;
}

void	digit_2(char *input, int *i_s, char **num0_100)
{
	int	temp;

	if (input[i_s[0]] == '0')
	{
		i_s[1] -= 1;
		i_s[0] += 1;
		return ;
	}
	temp = (input[i_s[0]] - '0') * 10 + input[i_s[0] + 1] - '0';
	if (num0_100[temp])
	{
		print_word(num0_100, temp);
		i_s[1] -= 2;
		i_s[0] += 2;
	}
	else
	{
		temp = (input[i_s[0]] - '0') * 10;
		print_word(num0_100, temp);
		i_s[1] -= 1;
		i_s[0] += 1;
	}
}

void	split(char *input, int *i_s, char **num0_100)
{
	if (i_s[1] % 3 == 0)
		digit_3(input, i_s, num0_100);
	if (i_s[1] % 3 == 2)
		digit_2(input, i_s, num0_100);
	if (i_s[1] % 3 == 1)
	{
		print_word(num0_100, input[i_s[0]] - '0');
		i_s[0] += 1;
	}
}
