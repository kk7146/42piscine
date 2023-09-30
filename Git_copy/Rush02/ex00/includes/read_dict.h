/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:28:25 by dogwak            #+#    #+#             */
/*   Updated: 2023/09/10 17:50:36 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_DICT_H
# define READ_DICT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "dict.h"
# include "dict_util.h"

int	read_dict_file(char *file_name, char **pbuffer);
#endif
