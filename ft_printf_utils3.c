/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fshields <fshields@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:33:50 by fshields          #+#    #+#             */
/*   Updated: 2023/11/21 12:38:01 by fshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	how_long_hex(unsigned int n)
{
	int	rtn;

	rtn = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		rtn ++;
		n /= 16;
	}
	return (rtn);
}

int	how_long_hex_long(unsigned long int n)
{
	int	rtn;

	rtn = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		rtn ++;
		n /= 16;
	}
	return (rtn);
}

int	how_long(int n)
{
	int	rtn;

	rtn = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		rtn ++;
	}
	while (n >= 1)
	{
		rtn ++;
		n /= 10;
	}
	return (rtn);
}
