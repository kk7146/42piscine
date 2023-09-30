/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_dict.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dogwak <dogwak@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:09:40 by dogwak            #+#    #+#             */
/*   Updated: 2023/09/10 12:16:01 by dogwak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_DICT_H
# define STRUCT_DICT_H

typedef struct s_dict
{
	char	**key_arr;
	char	**val_arr;
	int		entry_num;
}				t_dict;
#endif
