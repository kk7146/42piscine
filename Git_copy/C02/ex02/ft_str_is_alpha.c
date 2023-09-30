/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:40:04 by donson            #+#    #+#             */
/*   Updated: 2023/08/28 11:29:03 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}
/*int main()
{
	char c = '0';

	c+=ft_str_is_alpha("abcdefg");
	write(1, &c, 1);
	c = '0';
	c+=ft_str_is_alpha("asdaq1wd");
	write(1, &c, 1);
	c = '0';
    c+=ft_str_is_alpha("");
    write(1, &c, 1);
}*/
