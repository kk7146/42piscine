/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:35:17 by donson            #+#    #+#             */
/*   Updated: 2023/09/01 16:52:45 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write (1, &c, 1);
}

int	ft_char_is_printable(unsigned int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	printhex(unsigned int num)
{
	char	c[16];

	c[0] = '0';
	c[1] = '1';
	c[2] = '2';
	c[3] = '3';
	c[4] = '4';
	c[5] = '5';
	c[6] = '6';
	c[7] = '7';
	c[8] = '8';
	c[9] = '9';
	c[10] = 'a';
	c[11] = 'b';
	c[12] = 'c';
	c[13] = 'd';
	c[14] = 'e';
	c[15] = 'f';
	ft_putchar(c[num / 16]);
	ft_putchar(c[num % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	*st;

	st = (unsigned char *)str;
	i = 0;
	while (st[i] != '\0')
	{
		if (ft_char_is_printable(st[i]))
			ft_putchar(st[i]);
		else
		{
			ft_putchar('\\');
			printhex(st[i]);
		}
		i++;
	}
}
/*int main()
{
	char c[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(c);
}*/
