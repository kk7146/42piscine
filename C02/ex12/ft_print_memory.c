/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:52:11 by donson            #+#    #+#             */
/*   Updated: 2023/08/30 19:14:19 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(long long int num, int first)
{
	unsigned char	c[16];
	int				i;

	i = 0;
	while (i < 10)
	{
		c[i] = '0' + i;
		i++;
	}
	i = 0;
	while (i < 6)
	{
		c[i + 10] = 'a' + i;
		i++;
	}
	if (num < 16 && first)
		write(1, &"0", 1);
	if (num > 16)
	{
		ft_putnbr(num / 16, 0);
		ft_putnbr(num % 16, 0);
	}
	else if (num <= 16)
		write(1, &c[num], 1);
}

void	print_addr(void *addr)
{
	long long int	ad;
	int				i;

	i = 0;
	ad = (long long int)addr;
	while (i < 15)
	{
		i++;
		if (ad < 16)
			write(1, &"0", 1);
		ad /= 16;
	}
	ad = (long long int)addr;
	ft_putnbr(ad, 0);
	write(1, &":", 1);
}

void	print_data_num(void *addr, unsigned int print_size)
{
	unsigned int	i;

	i = 0;
	while (i < print_size)
	{
		if (i % 2 == 0)
			write(1, &" ", 1);
		ft_putnbr((long long int)(*(unsigned char *)(addr + i)), 1);
		i++;
	}
	if (print_size < 16)
	{
		while (i < 16)
		{
			if (i % 2 == 0)
				write(1, &" ", 1);
			write(1, &" ", 1);
			write(1, &" ", 1);
			i++;
		}
	}
	write(1, &" ", 1);
}

void	print_data_char(void *addr, unsigned int print_size)
{
	unsigned int	i;
	unsigned int	addr_;

	i = 0;
	while (i < print_size)
	{
		addr_ = (*(unsigned char *)(addr + i));
		if (addr_ >= 32 && addr_ <= 126)
			write(1, &(*(unsigned char *)(addr + i)), 1);
		else
			write(1, &".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	print_size;

	i = 0;
	while (i < size)
	{
		if (i + 16 <= size)
			print_size = 16;
		else
			print_size = size % 16;
		print_addr(addr + i);
		print_data_num(addr + i, print_size);
		print_data_char(addr + i, print_size);
		write(1, &"\n", 1);
		i += 16;
	}
	return (addr);
}
