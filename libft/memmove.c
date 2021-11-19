/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:43:33 by hlachkar          #+#    #+#             */
/*   Updated: 2021/11/15 06:40:30 by hlachkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (n == 0 || (!dest && !src))
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	i = n;
	while (i > 0)
	{
		((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
		i--;
	}
	return (dest);
}
