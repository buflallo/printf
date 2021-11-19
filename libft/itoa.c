/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:43:33 by hlachkar          #+#    #+#             */
/*   Updated: 2021/11/13 07:58:46 by hlachkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_neg_itoa(int n, int cnt)
{
	int		temp;
	char	*res;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	res = (char *)malloc(cnt * sizeof(char) + 2);
	if (!res)
		return (NULL);
	i = cnt;
	temp = -n;
	res[0] = '-';
	while (temp)
	{
		res[i] = temp % 10 + 48;
		temp /= 10;
		i--;
	}
	res[cnt + 1] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	int		temp;
	int		count;
	char	*res;

	temp = n;
	count = 0;
	while (temp)
	{
		count++;
		temp /= 10;
	}
	if (n <= 0)
		return (ft_neg_itoa(n, count));
	else
		res = (char *)malloc(count * sizeof(char) + 1);
	if (!res)
		return (NULL);
	res[count] = '\0';
	while (n)
	{
		res[count - 1] = n % 10 + 48;
		n /= 10;
		count--;
	}
	return (res);
}
