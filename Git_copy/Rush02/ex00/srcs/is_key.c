/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_key.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:15:08 by donson            #+#    #+#             */
/*   Updated: 2023/09/10 17:54:56 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is_key.h"
#include "tool.h"

int	is_key1_under(char *key)
{
	if (!(cmp(key, "0")))
		return (1);
	if (!(cmp(key, "1")))
		return (1);
	if (!(cmp(key, "2")))
		return (1);
	if (!(cmp(key, "3")))
		return (1);
	if (!(cmp(key, "4")))
		return (1);
	if (!(cmp(key, "5")))
		return (1);
	if (!(cmp(key, "6")))
		return (1);
	if (!(cmp(key, "7")))
		return (1);
	if (!(cmp(key, "8")))
		return (1);
	if (!(cmp(key, "9")))
		return (1);
	if (!(cmp(key, "10")))
		return (1);
	if (!(cmp(key, "11")))
		return (1);
	return (0);
}

int	is_key2_under(char *key)
{
	if (!(cmp(key, "12")))
		return (1);
	if (!(cmp(key, "13")))
		return (1);
	if (!(cmp(key, "14")))
		return (1);
	if (!(cmp(key, "15")))
		return (1);
	if (!(cmp(key, "16")))
		return (1);
	if (!(cmp(key, "17")))
		return (1);
	if (!(cmp(key, "18")))
		return (1);
	if (!(cmp(key, "19")))
		return (1);
	if (!(cmp(key, "20")))
		return (1);
	if (!(cmp(key, "30")))
		return (1);
	if (!(cmp(key, "40")))
		return (1);
	if (!(cmp(key, "50")))
		return (1);
	return (0);
}

int	is_key3_under(char *key)
{
	if (!(cmp(key, "60")))
		return (1);
	if (!(cmp(key, "70")))
		return (1);
	if (!(cmp(key, "80")))
		return (1);
	if (!(cmp(key, "90")))
		return (1);
	if (!(cmp(key, "100")))
		return (1);
	return (0);
}

int	up(char *key)
{
	if (!(cmp(key, "1000")))
		return (1);
	if (!(cmp(key, "1000000")))
		return (2);
	if (!(cmp(key, "1000000000")))
		return (3);
	if (!(cmp(key, "1000000000000")))
		return (4);
	if (!(cmp(key, "1000000000000000")))
		return (5);
	if (!(cmp(key, "1000000000000000000")))
		return (6);
	if (!(cmp(key, "1000000000000000000000")))
		return (7);
	if (!(cmp(key, "1000000000000000000000000")))
		return (8);
	if (!(cmp(key, "1000000000000000000000000000")))
		return (9);
	if (!(cmp(key, "1000000000000000000000000000000")))
		return (10);
	if (!(cmp(key, "1000000000000000000000000000000000")))
		return (11);
	if (!(cmp(key, "1000000000000000000000000000000000000")))
		return (12);
	return (0);
}
