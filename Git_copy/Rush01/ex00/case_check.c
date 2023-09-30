/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taekhkim <xorgh456@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:41:28 by donson            #+#    #+#             */
/*   Updated: 2023/09/03 16:57:49 by taekhkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	case_idx(int i, int j);

int	istrue_(int *req)
{
	if (case_idx(req[8], req[12]) == 9 || case_idx(req[9], req[13]) == 9)
	{
		return (1);
	}
	if (case_idx(req[10], req[14]) == 9 || case_idx(req[11], req[15]) == 9)
	{
		return (1);
	}
	return (0);
}
