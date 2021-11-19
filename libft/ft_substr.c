/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:43:33 by hlachkar          #+#    #+#             */
/*   Updated: 2021/11/13 06:40:24 by hlachkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (len <= i)
		sub = (char *)malloc(len + 1);
	else
		sub = (char *)malloc(i + 1);
	if (!sub || !s)
		return (NULL);
	else
		sub[0] = '\0';
	if (start > (unsigned int)i)
		return (sub);
	i = 0;
	while (len-- && s[start])
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
