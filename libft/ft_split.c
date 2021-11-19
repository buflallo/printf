/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:43:33 by hlachkar          #+#    #+#             */
/*   Updated: 2021/11/18 04:54:44 by hlachkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		while (s[i + 1] != c && s[i + 1])
			i++;
		if (s[i] != c)
			cnt++;
		i++;
	}
	return (cnt);
}

int	count_word_chars(char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s)
	{
		s++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		cnt;
	char	**tab;
	int		len;
	char	*temp;

	if (!s)
		return (NULL);
	cnt = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (cnt) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	temp = (char *)s;
	while (i < cnt)
	{
		while (*temp == c)
			temp++;
		len = count_word_chars(temp, c);
		tab[i] = ft_substr(temp, 0, len);
		temp += len;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
