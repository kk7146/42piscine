/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dogwak <dogwak@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:34:25 by dogwak            #+#    #+#             */
/*   Updated: 2023/09/10 14:56:31 by dogwak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_DICT_H
# define PARSE_DICT_H

# include <stdlib.h>
# include "dict.h"

int		parse_entry(t_dict *this, char *str);
int		parse_element(char **element_buffer, char *str, int start, char delim);
char	*str_dup_range(char *src, int start, int end);
#endif
