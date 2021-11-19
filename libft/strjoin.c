/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:43:33 by hlachkar          #+#    #+#             */
/*   Updated: 2021/11/15 20:52:02 by hlachkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size1;
	int		size2;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	size1 = (int)ft_strlen(s1);
	size2 = (int)ft_strlen(s2);
	size1++;
	size2++;
	res = (char *)malloc(size1 + size2);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, size1);
	ft_strlcpy((res + size1 - 1), s2, size2);
	return (res);
}
