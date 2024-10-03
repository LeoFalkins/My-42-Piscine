/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:52:07 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/25 10:41:32 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_solution(char **grid, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putstr(grid[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	solver(char *map, char **grid, int y, int x)
{
	int		size;
	char	curr;

	size = ft_strlen(map) / 4;
	if (y == size)
		if (is_valid_col(map, grid, x))
			return (1);
		else
			return (0);
	else if (x == size)
	{
		if (is_valid_line(map, grid, y))
			return (solver(map, grid, y + 1, 0));
		else
			return (0);
	}
	else if (grid[y][x] != '0')
		return (solver(map, grid, y, x + 1));
	else
	{
		curr = '1';
		while (curr <= size + '0')
		{
			if (is_valid_x(grid, y, curr)
				&& is_valid_y(grid, x, curr, size))
			{
				grid[y][x] = curr;
				if (is_valid_col(map, grid, x))
				{
					if (solver(map, grid, y, x + 1))
						return (1);
				}
				grid[y][x] = '0';
			}
			curr++;
			grid[y][x] = '0';
		}
	}
	return (0);
}
