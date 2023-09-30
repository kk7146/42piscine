/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:02:49 by donson            #+#    #+#             */
/*   Updated: 2023/09/10 17:24:19 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "dict.h"
#include "dataset.h"
#include <stdio.h>

void	split_print(char *input, char **num0_100, char **num1000);

int	input_error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int	arg2(char **argv)
{
	const char	default_dict_name[] = "./numbers/numbers.dict";
	char		**arr1;
	char		**arr2;
	t_dict		dictionary;

	if (input_error(argv[1]))
	{
		destruct_dict(&dictionary);
		return (0);
	}
	if (init_dict(&dictionary, (char *)default_dict_name) != 1)
	{
		write(1, "Dict Error\n", 11);
		destruct_dict(&dictionary);
		return (0);
	}
	if (dataset(&dictionary, &arr1, &arr2) != 41)
	{
		write(1, "Dict Error\n", 11);
		destruct_dict(&dictionary);
		return (0);
	}
	split_print(argv[1], arr1, arr2);
	destruct_dict(&dictionary);
	return (1);
}

int	arg3(char **argv)
{
	char		**arr1;
	char		**arr2;
	t_dict		dictionary;	

	if (input_error(argv[2]))
	{
		destruct_dict(&dictionary);
		return (0);
	}
	if (init_dict(&dictionary, argv[1]) != 1)
	{
		write(1, "Dict Error\n", 11);
		destruct_dict(&dictionary);
		return (0);
	}
	if (dataset(&dictionary, &arr1, &arr2) != 41)
	{
		write(1, "Dict Error\n", 11);
		destruct_dict(&dictionary);
		return (0);
	}
	split_print(argv[2], arr1, arr2);
	destruct_dict(&dictionary);
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		arg2(argv);
	else if (argc == 3)
		arg3(argv);
	else
		write(1, "Error\n", 6);
	return (0);
}
