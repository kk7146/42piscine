/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:32:32 by donson            #+#    #+#             */
/*   Updated: 2023/08/26 15:42:46 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int		main()
{
	char	dest[10];
	char	src[3] = {'a','b','c'};
	ft_strcpy(dest, src);
	int		i = 0;
	while (dest[i] != '\0')
    {
        write(1, &dest[i], 1);
        i++;
    }
}*/
