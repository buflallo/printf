/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:43:33 by hlachkar          #+#    #+#             */
/*   Updated: 2021/11/13 05:57:12 by hlachkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str_res;
	char			*temp;
	unsigned int	index;

	if (!s)
		return (NULL);
	str_res = (char *)malloc(ft_strlen(s) + 1);
	if (!str_res)
		return (NULL);
	temp = (char *)s;
	index = 0;
	while (*temp)
	{
		str_res[index] = f(index, *temp);
		temp++;
		index++;
	}
	str_res[index] = '\0';
	return (str_res);
}
