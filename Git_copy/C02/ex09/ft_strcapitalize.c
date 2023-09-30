/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:07:59 by donson            #+#    #+#             */
/*   Updated: 2023/08/27 12:03:51 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	ft_char_is_number(char c)
{
	if (!(c >= 48 && c <= 57))
		return (0);
	return (1);
}

int	ft_char_is_lowalpha(char c)
{
	if (!(c >= 97 && c <= 122))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	isfirst;

	isfirst = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (ft_char_is_lowalpha(str[i]))
		{
			if (isfirst)
				str[i] -= 32;
			isfirst = 0;
		}
		else if (ft_char_is_number(str[i]))
			isfirst = 0;
		else
			isfirst = 1;
		i++;
	}
	return (str);
}
/*int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s", str);
}*/
