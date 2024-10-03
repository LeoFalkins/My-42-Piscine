/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:22:01 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/14 13:03:53 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_line(int x, char edge1, char edge2, char mid);

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x <= 0 || y <= 0)
	{
		write(1, "Please only enter positive numbers.\n", 36);
		return ;
	}
	while (i <= y)
	{
		if (i == 1)
			print_line(x, 'A', 'C', 'B');
		else if (i == y)
			print_line(x, 'C', 'A', 'B');
		else
			print_line(x, 'B', 'B', ' ');
		ft_putchar('\n');
		i++;
	}
}

void	print_line(int x, char edge1, char edge2, char mid)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1)
			ft_putchar(edge1);
		else if (j == x)
			ft_putchar(edge2);
		else
			ft_putchar(mid);
		j++;
	}
}
