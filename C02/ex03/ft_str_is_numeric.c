/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:49:58 by donson            #+#    #+#             */
/*   Updated: 2023/08/26 18:11:57 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	char c = '0';

	c+=ft_str_is_numeric("12334567890");
	write(1, &c, 1);
	c = '0';
	c+=ft_str_is_numeric("asdaq1wd");
	write(1, &c, 1);
	c = '0';
	c+=ft_str_is_numeric("");
	write(1, &c, 1);
}*/
