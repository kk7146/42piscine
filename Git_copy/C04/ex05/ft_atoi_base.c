/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:30:36 by donson            #+#    #+#             */
/*   Updated: 2023/09/06 17:14:43 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_error(unsigned char c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	if (c == 43 || c == 45)
		return (1);
	return (0);
}

int	isinbase(unsigned char c, unsigned char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_ctoi(unsigned char c, unsigned char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(unsigned char *base)
{
	int	bin;
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
		i++;
	bin = i;
	i = 0;
	if (bin == 0 || bin == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (ft_error(base[i]))
			return (0);
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

int	ft_atoi_base(char *str, char *base)
{
	long long int	num;
	int				i;
	int				sign;
	int				bin;
	unsigned char	*s;

	s = (unsigned char *)str;
	i = 0;
	while ((unsigned char)base[i] != '\0')
		i++;
	bin = i;
	num = 0;
	i = 0;
	sign = 1;
	if (!(check_base((unsigned char *)base)))
		return (0);
	while (s[i] == 9 || s[i] == 10 || s[i] == 11
		|| s[i] == 12 || s[i] == 13 || s[i] == 32)
		i++;
	while (s[i] == '-' || s[i] == '+')
		if (s[i++] == '-')
			sign *= -1;
	while (s[i] != '\0' && isinbase(s[i], (unsigned char *)base))
		num = num * bin + ft_ctoi(s[i++], (unsigned char *)base);
	return (sign * num);
}
/*int main()
{
	printf("%d", ft_atoi_base("  --+-1234afqwe", "0123456789abcdef"));
}*/
