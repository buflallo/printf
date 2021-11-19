/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:43:33 by hlachkar          #+#    #+#             */
/*   Updated: 2021/11/14 06:16:12 by hlachkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdio.h>

int	except(int n, int re, const char *np)
{
	(void)n;
	if (n == 1 && ((re == 1 || re == 0) || *(np + 1)))
		return (-1);
	else
	{
		if (n == -1 && (re == 1 || *(np + 1)))
			return (0);
		return (re);
	}
}

int	ft_atoi(const char	*nptr)
{
	int	sign;
	int	res;
	int	cnt;

	sign = 1;
	res = 0;
	cnt = 0;
	while ((*nptr > 8 && *nptr < 14) || *nptr == ' ')
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - 48;
		if (cnt == 18)
			return (except(sign, res, nptr));
		nptr++;
		cnt++;
	}
	return (res * sign);
}
