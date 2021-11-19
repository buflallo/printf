/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:43:33 by hlachkar          #+#    #+#             */
/*   Updated: 2021/11/13 06:04:27 by hlachkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*temp;
	unsigned char	temp_c;

	temp = (unsigned char *)s;
	temp_c = (unsigned char)c;
	if (temp_c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (*temp != '\0')
	{
		if (*temp == temp_c)
			return ((char *)temp);
		temp++;
	}
	return (NULL);
}
