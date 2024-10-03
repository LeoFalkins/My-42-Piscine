/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:50:35 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/18 09:10:09 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 1;
	while (i < size)
	{
		if (tab[i - 1] > tab[i])
		{
			swap = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = swap;
			i = 0;
		}
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	i[] = {12, 25, 75, 1, 23, 5, 8};
	int	j;

	j = 0;
	while (i[j])
	{
		printf("%d ", i[j]);
		j++;
	}
	printf("\n");
	j = 0;
	ft_sort_int_tab(i, 7);
	while (i[j])
	{
		printf("%d ", i[j]);
		j++;
	}
}*/
