/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:43:33 by hlachkar          #+#    #+#             */
/*   Updated: 2021/11/13 02:43:38 by hlachkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if ((!*ss1 || !*ss2) && n > 0)
	{
		return (*ss1 - *ss2);
	}
	while (n > 0 && (*ss1 || *ss2))
	{
		if (*ss1 != *ss2)
			return (*ss1 - *ss2);
		n--;
		ss1++;
		ss2++;
	}
	return (0);
}
