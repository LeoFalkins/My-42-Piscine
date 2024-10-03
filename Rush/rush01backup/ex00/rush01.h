/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:25:34 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/25 10:26:31 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H
# include <stdlib.h>
# include <unistd.h>

//Strings utils

int		ft_countwords(char *str, char sep);
int		ft_strlen(char *str);
void	ft_putstr(char *str);

//Error checking

int		check_error(int ac, char *map);
int		is_map_valid1(char *map, int size);
int		is_map_valid2(char *map, int size);

//Input cleaner

char	*clean_map(char *argv1);

//Grid initializer

char	**init_grid(int size);

//Backtracking function

int		solver(char *map, char **grid, int y, int x);

//Validity checks for backtracking function

int		is_valid_x(char **grid, int y, char curr);
int		is_valid_y(char **grid, int x, char curr, int size);
int		is_valid_line(char *map, char **grid, int y);
int		is_valid_col(char *map, char **grid, int x);
int		check_map_down(char **grid, int pos, int size);
int		check_map_up(char **grid, int pos, int size);
int		check_map_right(char **grid, int pos, int size);
int		check_map_left(char **grid, int pos, int size);
int		count_visible(char **grid, int view, int pos, int size);
int		is_line_full(char **grid, int y, int size);
int		is_column_full(char **grid, int x, int size);

//Solution printer

void	print_solution(char **grid, int size);

//Malloc freeing

void	free_grid(char **grid, int size);
#endif
