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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	si;

	if (*little == '\0')
		return ((char *)big);
	si = ft_strlen(little);
	while (*big && len > 0)
	{
		if (ft_strncmp(little, big, si) == 0 && len >= si)
			return ((char *)big);
		len -= 1;
		big += 1;
	}
	return (NULL);
}
