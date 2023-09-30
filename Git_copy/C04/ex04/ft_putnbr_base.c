/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:39:12 by donson            #+#    #+#             */
/*   Updated: 2023/09/06 17:15:26 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

int	ft_strlen(unsigned char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(unsigned char *base)
{
	int	bin;
	int	i;
	int	j;

	i = -1;
	bin = ft_strlen(base);
	if (bin == 0 || bin == 1)
		return (0);
	while (base[++i] != '\0')
		if (base[i] == 43 || base[i] == 45)
			return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				bin;
	long			num;
	unsigned char	*bas;

	bas = (unsigned char *)base;
	num = nbr;
	bin = ft_strlen(bas);
	if (check_base(bas))
	{
		if (num < 0)
		{
			ft_putchar('-');
			num *= -1;
		}
		if (num > bin - 1)
		{
			ft_putnbr_base(num / bin, (char *)bas);
			ft_putnbr_base(num % bin, (char *)bas);
		}
		else if (num <= bin - 1)
			ft_putchar(bas[num]);
	}	
}
/*int main ()
{
	ft_putnbr_base(-2147483648, "0123456789abcdef");
}*/
