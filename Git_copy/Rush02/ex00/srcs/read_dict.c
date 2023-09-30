/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:05:23 by dogwak            #+#    #+#             */
/*   Updated: 2023/09/10 17:50:35 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_dict.h"

int	read_dict_file(char *file_name, char **pbuffer)
{
	int				f_size;
	int				dict_fd;
	char			cur_char;

	f_size = 0;
	dict_fd = open(file_name, O_RDONLY);
	if (dict_fd == -1)
		return (0);
	read(dict_fd, &cur_char, 1);
	while (read(dict_fd, &cur_char, 1) > 0)
		f_size++;
	close(dict_fd);
	dict_fd = open(file_name, O_RDONLY);
	(*pbuffer) = (char *)malloc(sizeof(char) * (f_size + 2));
	f_size = read(dict_fd, (*pbuffer), f_size);
	(*pbuffer)[f_size] = '\n';
	(*pbuffer)[f_size + 1] = '\0';
	dict_str_sanity_check(*pbuffer, f_size);
	close(dict_fd);
	return (f_size);
}
