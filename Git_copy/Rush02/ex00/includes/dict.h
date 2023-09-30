/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dogwak <dogwak@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:38:24 by dogwak            #+#    #+#             */
/*   Updated: 2023/09/10 12:14:20 by dogwak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

# include <stdlib.h>
# include "struct_dict.h"
# include "read_dict.h"
# include "parse_dict.h"

int		init_dict(t_dict *this, char *file_name);
void	allocate_dict(t_dict *this, int num);
void	destruct_dict(t_dict *this);
#endif
