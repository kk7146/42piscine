/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:16:43 by donson            #+#    #+#             */
/*   Updated: 2023/09/08 18:12:54 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putstr(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_op(char *op)
{
	if (ft_strlen(op) == 1)
	{
		if (op[0] == '+')
			return (1);
		if (op[0] == '-')
			return (2);
		if (op[0] == '/')
			return (3);
		if (op[0] == '*')
			return (4);
		if (op[0] == '%')
			return (5);
	}
	return (0);
}

void	ft_print(char *argv[])
{
	int	checkop;

	checkop = check_op(argv[2]);
	if (checkop == 0)
		ft_putnbr(0);
	if (checkop == 1)
		ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
	if (checkop == 2)
		ft_putnbr(ft_atoi(argv[1]) - ft_atoi(argv[3]));
	if (checkop == 3)
	{
		if (ft_atoi(argv[3]) != 0)
			ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
		else
			ft_putstr("Stop : division by zero");
	}
	if (checkop == 4)
		ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
	if (checkop == 5)
	{
		if (ft_atoi(argv[3]) != 0)
			ft_putnbr(ft_atoi(argv[1]) % ft_atoi(argv[3]));
		else
			ft_putstr("Stop : modulo by zero");
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		ft_print(argv);
		ft_putstr("\n");
	}
	return (0);
}
