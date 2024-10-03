/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:15:12 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/17 09:39:14 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;
	int	i;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	total = nb;
	i = power;
	while (i > 1)
	{
		total *= nb;
		i--;
	}
	return (total);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(5, 5));
}*/
