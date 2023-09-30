/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:41:43 by donson            #+#    #+#             */
/*   Updated: 2023/09/07 17:22:15 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	check_base(unsigned char *base);

int	ft_strlen(unsigned char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ftp(long long int nbr, unsigned char *base, unsigned char *n, int *c)
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
			n[(*c)++] = '-';
			num *= -1;
		}
		if (num > bin - 1)
		{
			ftp(num / bin, bas, n, c);
			ftp(num % bin, bas, n, c);
		}
		else if (num <= bin - 1)
			n[(*c)++] = bas[num];
	}	
}

int	lenght_nbr(int nbr, int bin)
{
	long long int	nb;
	int				lenght;

	lenght = 0;
	nb = (long long int)nbr;
	if (nbr < 0)
	{
		nb *= -1;
		lenght++;
	}
	while (nb >= bin)
	{
		nb /= bin;
		lenght++;
	}
	lenght++;
	return (lenght);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				cnt;
	long long int	num;
	unsigned char	*number;
	int				len;

	if (nbr == 0 || base_to == 0 || base_from == 0)
		return (0);
	if (!(check_base((unsigned char *)base_from)))
		return (0);
	if (!(check_base((unsigned char *)base_to)))
		return (0);
	num = ft_atoi_base(nbr, base_from);
	len = lenght_nbr(num, ft_strlen((unsigned char *)base_to));
	number = (unsigned char *)malloc(len * sizeof(char) + 1);
	number[len] = '\0';
	ftp(num, (unsigned char *)base_to, number, &cnt);
	return ((char *)number);
}
/*#include <stdio.h>
int main (int ac, char **av)
{
	(void) ac;
	printf("%s", ft_convert_base(av[1], av[2], av[3]));
}*/
