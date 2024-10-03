/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_view.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:04:34 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/22 17:20:25 by gderez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_map_left(char **grid, int pos, int size)
{
	int	i;
	int	count;
	int	biggest;

	i = 0;
	count = 0;
	biggest = 0;
	while (i < size)
	{
		if (grid[pos][i] - '0' > biggest)
		{
			biggest = grid[pos][i] - '0';
			count++;
		}
		i++;
	}
	return (count);
}

int	check_map_right(char **grid, int pos, int size)
{
	int	i;
	int	count;
	int	biggest;

	i = 0;
	count = 0;
	biggest = 0;
	while (i < size)
	{
		if (grid[pos][size - 1 - i] - '0' > biggest)
		{
			biggest = grid[pos][size - 1 - i] - '0';
			count++;
		}
		i++;
	}
	return (count);
}

int	check_map_up(char **grid, int pos, int size)
{
	int	i;
	int	count;
	int	biggest;

	i = 0;
	count = 0;
	biggest = 0;
	while (i < size)
	{
		if (grid[i][pos] - '0' > biggest)
		{
			biggest = grid[i][pos] - '0';
			count++;
		}
		i++;
	}
	return (count);
}

int	check_map_down(char **grid, int pos, int size)
{
	int	i;
	int	count;
	int	biggest;

	i = 0;
	count = 0;
	biggest = 0;
	while (i < size)
	{
		if (grid[size - 1 - i][pos] - '0' > biggest)
		{
			biggest = grid[size - 1 - i][pos] - '0';
			count++;
		}
		i++;
	}
	return (count);
}

int	count_visible(char **grid, int view, int pos, int size)
{
	if (view == 0)
		return (check_map_up(grid, pos, size));
	else if (view == 1)
		return (check_map_down(grid, pos, size));
	else if (view == 2)
		return (check_map_left(grid, pos, size));
	else if (view == 3)
		return (check_map_right(grid, pos, size));
	else
		return (0);
}
