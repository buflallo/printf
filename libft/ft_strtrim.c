/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:43:33 by hlachkar          #+#    #+#             */
/*   Updated: 2021/11/13 05:52:48 by hlachkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	mecmp(const char *str, const char *chars, int len)
{
	int				flag;
	unsigned char	*cchars;
	int				i;

	i = len;
	flag = 1;
	while (flag && str[i] && i >= 0)
	{
		cchars = (unsigned char *)chars;
		while (str[i] != *cchars && *cchars)
			cchars++;
		if (str[i] != *cchars)
			flag = 0;
		if (len > 0)
			i--;
		else
			i++;
	}
	if (len > 0)
		return (len - i - 1);
	else
		return (i - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	i = mecmp(s1, set, 0);
	j = ft_strlen(s1) - mecmp(s1, set, ft_strlen(s1) - 1) - mecmp(s1, set, 0);
	if (j < 0)
	{
		res = malloc(1);
		*res = '\0';
	}
	else
		res = ft_substr(s1, i, j);
	return (res);
}
