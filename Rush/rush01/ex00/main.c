/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:40:50 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/22 20:04:14 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

char	**init_grid(int size)
{
	int		i;
	int		j;
	char	**grid;

	j = 0;
	i = 0;
	grid = malloc(sizeof(char *) * size);
	if (grid == NULL)
		return (NULL);
	while (i < size)
	{
		grid[i] = malloc((sizeof(char) * size) + 1);
		if (grid[i] == NULL)
		{
			free_grid(grid, size);
			return (NULL);
		}
		j = 0;
		while (j < size)
		{
			grid[i][j] = '0';
			j++;
		}
		grid[i][j] = '\0';
		i++;
	}
	return (grid);
}

char	*clean_map(char *argv1)
{
	char	*map;
	char	*ret;

	if (argv1 == NULL)
		return (NULL);
	map = malloc((sizeof(char) * ft_countwords(argv1, ' ')) + 1);
	if (map == NULL)
		return (NULL);
	ret = map;
	while (*argv1)
	{
		while (*argv1 == ' ')
			argv1++;
		if (*argv1)
		{
			*map = *argv1;
			map++;
		}
		argv1++;
	}
	*map = '\0';
	return (ret);
}

void	free_grid(char **grid, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

int	main(int ac, char **av)
{
	char	**grid;
	char	*map;

	map = clean_map(av[1]);
	if (map == NULL)
	{
		write(1, "Error\n", 6);
		return (2);
	}
	if (check_error(ac, map))
	{
		free(map);
		return (1);
	}
	grid = init_grid(ft_strlen(map) / 4);
	if (grid == NULL)
	{
		free(map);
		write(1, "Error\n", 6);
		return (3);
	}
	if (solver(map, grid, 0, 0))
		print_solution(grid, ft_strlen(map) / 4);
	else
	{
		free_grid(grid, ft_strlen(map) / 4);
		free(map);
		write(1, "Error\n", 6);
		return (4);
	}
	free_grid(grid, ft_strlen(map) / 4);
	free(map);
	return (0);
}
