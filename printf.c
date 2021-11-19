#include <stdio.h>
#include "libft/libft.h"
#include <stdarg.h>

void convert_hexa(unsigned int n, char x, int *k)
{
	char			*tab;
	unsigned int	rem;
	int				i;
	int 			j;

	i = 0;
	rem = n;
	while (rem && ++i)
		rem /= 16;
	tab = malloc(sizeof(char) * i);
	j = i;
	*k = i;
	while (n != 0 && i--)
	{
		rem = n % 16;
		if (rem < 10)
			tab[i] = 48 + rem;
		else
			tab[i] = x - 33 + rem;
		n /= 16;
	}
	while (i < j)
		ft_putchar_fd(tab[i++], 1);
	if (i == 0)
		ft_putchar_fd('0',1);
	free (tab);
}

void	put_unsigned(unsigned int n, int fd, int *k)
{
	char	str[15];
	int 	len;

	len = 0;
	while (n != 0)
	{
		str[len++] = '0' + n % 10;
		n /= 10;
	}
	if (len > 0)
		len--;
	*k = len - 1;
	while (len >= 0)
		write(fd, &str[len--], 1);
}

int	ft_printf(char const *lol, ...)
{
	va_list args;
	va_start (args, lol);
	int i;

	i = 0;
	while (*lol != '\0')
	{
		if (*lol == '%')
		{
			lol++;
			if (*lol == 'd' || *lol == 'i')
				ft_putnbr_fd(va_arg(args, int), 1, &i);
			if (*lol == 'c')
				ft_putchar_fd(va_arg(args, int), 1);
			if (*lol == 's')
				ft_putstr_fd(va_arg(args, char *), 1, &i);
			if (*lol == 'u')
				put_unsigned(va_arg(args, unsigned int), 1, &i);
			if (*lol == 'x' || *lol == 'X')
				convert_hexa(va_arg(args, int), *lol, &i);
			lol++;
			i++;
			continue;
		}
		ft_putchar_fd(*lol, 1);
		i++;
		lol++;
	}
	return (i);
}
//int main()
//{
//	printf("==== >%d\n", ft_printf("%u",-101));
//	printf("==== >%d\n", ft_printf("%u",-101));
//}
