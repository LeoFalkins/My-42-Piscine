/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:50:08 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/18 09:08:20 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swap;
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
	ft_rev_int_tab(i, 7);
	while (i[j])
	{
		printf("%d ", i[j]);
		j++;
	}
}*/
