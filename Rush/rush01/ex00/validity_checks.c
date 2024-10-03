/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity_checks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:06:48 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/25 10:26:47 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	is_valid_y(char **grid, int x, char curr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (grid[i][x] == curr)
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_x(char **grid, int y, char curr)
{
	int	i;

	i = 0;
	while (grid[y][i])
	{
		if (grid[y][i] == curr)
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_line(char *map, char **grid, int y)
{
	int	size;

	size = ft_strlen(map) / 4;
	if (is_line_full(grid, y, size))
	{
		if (count_visible(grid, 2, y, size) != map[y + 2 * size] - '0')
			return 0;
		if (count_visible(grid, 3, y, size) != map[y + 3 * size] - '0')
			return 0;
	}
	return 1;
}

int	is_valid_col(char *map, char **grid, int x)
{
	int	size;

	size = ft_strlen(map) / 4;
	if (is_column_full(grid, x, size))
	{
		if (count_visible(grid, 0, x, size) != map[x] - '0')
			return 0;
		if (count_visible(grid, 1, x, size) != map[x + size] - '0')
			return 0;
	}
	return 1;
}

int	is_line_full(char **grid, int y, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (grid[y][i] == '0')
			return (0);
		i++;
	}
	return (1);
}

int	is_column_full(char **grid, int x, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (grid[i][x] == '0')
			return (0);
		i++;
	}
	return (1);
}
