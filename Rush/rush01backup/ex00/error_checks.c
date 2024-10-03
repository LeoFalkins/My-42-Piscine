/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:01:08 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/22 18:28:29 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_error(int ac, char *map)
{
	if (ac != 2)
	{
		write(1, "Error1\n", 6);
		return (1);
	}
	if (is_map_valid1(map, ft_strlen(map)))
	{
		write(1, "Error2\n", 6);
		return (1);
	}
	if (is_map_valid2(map, ft_strlen(map) / 4))
	{
		write(1, "Error3\n", 6);
		return (1);
	}
	return (0);
}

int	is_map_valid1(char *map, int size)
{
	int	i;

	i = 0;
	if (size % 4 != 0 || size / 4 > 9)
		return (1);
	while (map[i])
	{
		if (map[i] > (size / 4) + '0' || map[i] < '1')
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int	is_map_valid2(char *map, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size;
	while (i < size)
	{
		if ((map[i] - '0') + (map[j] - '0') > size + 1)
			return (1);
		i++;
		j++;
	}
	i = 2 * size;
	j = 3 * size;
	while (i < size * 3)
	{
		if ((map[i] - '0') + (map[j] - '0') > size + 1)
			return (1);
		i++;
		j++;
	}
	return (0);
}
