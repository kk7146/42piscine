/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taekhkim <xorgh456@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:59:12 by taekhkim          #+#    #+#             */
/*   Updated: 2023/09/03 16:57:56 by taekhkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	possible_input(int possible_row[][6]);
void	possible_input1(int possible_row[][6]);
void	possible_input2(int possible_row[][6]);

void	possible_input(int possible_row[][6])
{
	int	idx;

	idx = 0;
	possible_row[0][idx++] = 1234;
	possible_row[0][idx++] = 0000;
	possible_row[0][idx++] = 0000;
	possible_row[0][idx++] = 0000;
	possible_row[0][idx++] = 0000;
	possible_row[0][idx++] = 0000;
	idx = 0;
	possible_row[1][idx++] = 1243;
	possible_row[1][idx++] = 1342;
	possible_row[1][idx++] = 2341;
	possible_row[1][idx++] = 0000;
	possible_row[1][idx++] = 0000;
	possible_row[1][idx++] = 0000;
	idx = 0;
	possible_row[2][idx++] = 1324;
	possible_row[2][idx++] = 2134;
	possible_row[2][idx++] = 2314;
	possible_row[2][idx++] = 0000;
	possible_row[2][idx++] = 0000;
	possible_row[2][idx++] = 0000;
	possible_input1(possible_row);
}

void	possible_input1(int possible_row[][6])
{
	int	idx;

	idx = 0;
	possible_row[3][idx++] = 1432;
	possible_row[3][idx++] = 2431;
	possible_row[3][idx++] = 3421;
	possible_row[3][idx++] = 0000;
	possible_row[3][idx++] = 0000;
	possible_row[3][idx++] = 0000;
	idx = 0;
	possible_row[4][idx++] = 1423;
	possible_row[4][idx++] = 2413;
	possible_row[4][idx++] = 2143;
	possible_row[4][idx++] = 3241;
	possible_row[4][idx++] = 3142;
	possible_row[4][idx++] = 3412;
	idx = 0;
	possible_row[5][idx++] = 3214;
	possible_row[5][idx++] = 3124;
	possible_row[5][idx++] = 0000;
	possible_row[5][idx++] = 0000;
	possible_row[5][idx++] = 0000;
	possible_row[5][idx++] = 0000;
	possible_input2(possible_row);
}

void	possible_input2(int possible_row[][6])
{
	int	idx;

	idx = 0;
	possible_row[6][idx++] = 4231;
	possible_row[6][idx++] = 4312;
	possible_row[6][idx++] = 4132;
	possible_row[6][idx++] = 0000;
	possible_row[6][idx++] = 0000;
	possible_row[6][idx++] = 0000;
	idx = 0;
	possible_row[7][idx++] = 4213;
	possible_row[7][idx++] = 4123;
	possible_row[7][idx++] = 0000;
	possible_row[7][idx++] = 0000;
	possible_row[7][idx++] = 0000;
	possible_row[7][idx++] = 0000;
	idx = 0;
	possible_row[8][idx++] = 4321;
	possible_row[8][idx++] = 0000;
	possible_row[8][idx++] = 0000;
	possible_row[8][idx++] = 0000;
	possible_row[8][idx++] = 0000;
	possible_row[8][idx++] = 0000;
}
