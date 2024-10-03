/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:28:55 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/27 10:10:27 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	is_double(char c, char *str, int pos)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i++;
	}
	if (i == pos)
		return (0);
	return (1);
}

int	is_in_string(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	inter(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i])
	{
		if (!(is_double(str1[i], str1, i)) && is_in_string(str1[i], str2))
			ft_putchar(str1[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
		ft_putchar('\n');
	inter(av[1], av[2]);
	ft_putchar('\n');
}
