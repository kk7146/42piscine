/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:49:58 by donson            #+#    #+#             */
/*   Updated: 2023/08/26 18:06:25 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	char c = '0';

	c+=ft_str_is_lowercase("abcdefg");
	write(1, &c, 1);
	c = '0';
	c+=ft_str_is_lowercase("asaq1wd");
	write(1, &c, 1);
	c = '0';
	c+=ft_str_is_lowercase("");
	write(1, &c, 1);
	c = '0';
    c+=ft_str_is_lowercase("asdacaB");
    write(1, &c, 1);
}*/
