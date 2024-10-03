/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:49:39 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/23 14:12:18 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char c)
{
	char	*hex;
	char	out[2];

	hex = "0123456789abcdef";
	out[0] = hex[c / 16];
	out[1] = hex[c % 16];
	write(1, out, 2);
}

void	ft_print_addr(long long addr)
{
	int		i;
	char	hex_addr[16];
	char	*hex;

	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		hex_addr[i] = hex[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, hex_addr, 16);
}

void	ft_print_row(char *str, unsigned int i, unsigned int size)
{
	unsigned int	j;

	j = 0;
	ft_print_addr((long long)(str + i));
	write(1, ": ", 2);
	while (j < 16)
	{
		if (i + j < size)
			ft_print_hex(str[i + j]);
		else
			write(1, "  ", 2);
		if (j % 2)
			ft_putchar(' ');
		j++;
	}
	j = 0;
	while (j < 16 && i + j < size)
	{
		if (str[i + j] >= 32 && str[i + j] <= 126)
			ft_putchar(str[i + j]);
		else
			ft_putchar('.');
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = 0;
	j = 0;
	str = (char *)addr;
	if (size == 0)
		return (0);
	while (i < size)
	{
		ft_print_row(str, i, size);
		i += 16;
		ft_putchar('\n');
	}
	return (addr);
}

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	ft_print_memory(av[1], ft_strlen(av[1]));
	return (0);
}*/
