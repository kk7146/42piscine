/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:44:42 by dogwak            #+#    #+#             */
/*   Updated: 2023/09/10 18:37:20 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict_util.h"

int	is_printable(unsigned char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	if ('A' <= c && c <= 'A')
		return (1);
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

void	dict_str_sanity_check(char *dict_str, int str_length)
{
	int				idx;
	int				start_idx;
	int				colon_flag;

	idx = 0;
	start_idx = 0;
	colon_flag = 0;
	while (idx < str_length)
	{
		if (!colon_flag && dict_str[idx] == ':')
			colon_flag = 1;
		else if (dict_str[idx] == '\n')
		{
			if (!colon_flag)
				while (start_idx <= idx)
					dict_str[start_idx++] = ' ';
			colon_flag = 0;
			start_idx = idx + 1;
		}
		if (!is_printable(dict_str[idx])
			&& dict_str[idx] != ':' && dict_str[idx] != '\n')
			dict_str[idx] = ' ';
		idx++;
	}
}
