/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dogwak <dogwak@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:16:45 by dogwak            #+#    #+#             */
/*   Updated: 2023/09/10 12:26:41 by dogwak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

// return 0, entry error
// return -1, system error
// return 1, normal
int	init_dict(t_dict *this, char *file_name)
{
	int				idx;
	int				num_nl;
	int				file_size;
	char			*file_str;

	file_size = read_dict_file(file_name, &file_str);
	if (file_size == 0)
		return (0);
	idx = 0;
	num_nl = 0;
	while (file_str[idx] != '\0')
		if (file_str[idx++] == '\n')
			num_nl++;
	allocate_dict(this, num_nl);
	if (!this->entry_num)
		return (0);
	if (!this->key_arr || !this->val_arr)
		return (0);
	if (!parse_entry(this, file_str))
		return (0);
	free(file_str);
	return (1);
}

void	allocate_dict(t_dict *this, int num)
{
	int				idx;

	this->entry_num = num;
	this->key_arr = (char **)malloc(sizeof(char *) * num);
	this->val_arr = (char **)malloc(sizeof(char *) * num);
	idx = 0;
	while (idx < num)
	{
		this->key_arr[idx] = (char *)0;
		this->val_arr[idx] = (char *)0;
		idx++;
	}
}

void	destruct_dict(t_dict *this)
{
	int				idx;

	idx = 0;
	while (idx < this->entry_num)
	{
		if (!this->key_arr[idx])
			free(this->key_arr[idx]);
		if (!this->val_arr[idx])
			free(this->val_arr[idx]);
		idx++;
	}
	if (!this->key_arr)
	{
		free(this->key_arr);
		this->key_arr = 0;
	}
	if (!this->val_arr)
	{
		free(this->val_arr);
		this->val_arr = 0;
	}
}
