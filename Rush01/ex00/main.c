/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taekhkim <xorgh456@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:34:07 by donson            #+#    #+#             */
/*   Updated: 2023/09/03 16:57:54 by taekhkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_rush01(int *req);

int	_isspace(char argv)
{
	if (argv == ' ' || argv == '\t' || argv == '\n')
		return (0);
	else if (argv == '\v' || argv == '\f' || argv == '\r')
		return (0);
	return (1);
}

int	error_check(char *argv, int *arr)
{
	int	i[2];

	i[0] = 0;
	i[1] = 0;
	while (argv[i[0]])
	{
		if (i[1] == 16 && ('1' <= argv[i[0]] && argv[i[0]] <= '4'))
			return (0);
		if (argv[i[0]] == '+' && ('1' <= argv[i[0]] || argv[i[0]] <= '4'))
		{
			arr[i[1]] = argv[++i[0]] - '0';
			i[1]++;
		}
		else if (_isspace(argv[i[0]]) && (argv[i[0]] < '1' || '4' < argv[i[0]]))
			return (0);
		else if ('1' <= argv[i[0]] && argv[i[0]] <= '4')
		{
			arr[i[1]] = argv[i[0]] - '0';
			i[1]++;
		}
		i[0]++;
	}
	if (argv[i[0]] == '\0' && i[1] < 16)
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	int	arr[16];

	if (argc != 2 || (!error_check(argv[1], arr)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_rush01(arr);
	return (0);
}
