/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:14:54 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/27 11:43:36 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_double(char c, char *str, int pos)
{
	while (pos >= 0)
	{
		if (str[--pos] == c)
			return (1);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_union(char *str1, char *str2)
{
	int	i;

	i = -1;
	while (str1[++i])
	{
		if (!is_double(str1[i], str1, i))
			ft_putchar(str1[i]);
	}
	i = -1;
	while (str2[++i])
	{
		if (!is_double(str2[i], str2, i) && !is_double(str2[i], str1, ft_strlen(str1)))
			ft_putchar(str2[i]);
	}
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	if (ac != 3)
		ft_putchar('\n');
	ft_union(av[1], av[2]);
}
