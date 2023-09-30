/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dogwak <dogwak@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:34:36 by dogwak            #+#    #+#             */
/*   Updated: 2023/09/10 16:30:50 by dogwak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse_dict.h"

int	parse_entry(t_dict *this, char *str)
{
	int				idx;
	int				entry_idx;

	idx = 0;
	entry_idx = 0;
	while (str[idx] != '\0')
	{
		idx = parse_element(&(this->key_arr[entry_idx]), str, idx, ':');
		if (idx < 0)
			return (0);
		idx = parse_element(&(this->val_arr[entry_idx]), str, idx, '\n');
		if (idx < 0)
			return (0);
		entry_idx++;
	}
	return (1);
}

int	parse_element(char **element_buffer, char *str, int start, char delim)
{
	int				idx;

	idx = start;
	while (str[idx] == ' ')
		idx++;
	start = idx;
	while (str[idx] != ' ' && str[idx] != delim)
	{
		if (delim != ':' && (str[idx] == '\n' || str[idx] == '\0'))
			return (-1);
		idx++;
	}
	*element_buffer = str_dup_range(str, start, idx);
	while (str[idx] == ' ')
		idx++;
	if (str[idx++] != delim)
		return (-1);
	return (idx);
}

char	*str_dup_range(char *src, int start, int end)
{
	char			*dst;
	int				idx;
	int				size;

	size = end - start;
	dst = (char *)malloc(sizeof(char) * (size + 1));
	idx = 0;
	if (dst == 0)
		return (dst);
	while (start + idx < end)
	{
		dst[idx] = src[start + idx];
		idx++;
	}
	dst[idx] = '\0';
	return (dst);
}
