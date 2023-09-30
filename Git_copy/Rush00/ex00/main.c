/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:12:21 by donson            #+#    #+#             */
/*   Updated: 2023/08/27 17:01:48 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	_atoi(char *str)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	if (str[0] == '-')
		return (0);
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	if (argc == 3)
		rush(_atoi(argv[1]), _atoi(argv[2]));
	return (0);
}
