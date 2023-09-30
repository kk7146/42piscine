/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:12:48 by donson            #+#    #+#             */
/*   Updated: 2023/08/26 18:17:18 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	char c = '0';

	c+=ft_str_is_uppercase("ABBIBIBZ");
	write(1, &c, 1);
	c = '0';
	c+=ft_str_is_uppercase("asdaqAwd");
	write(1, &c, 1);
	c = '0';
    c+=ft_str_is_uppercase("");
    write(1, &c, 1);
}*/
