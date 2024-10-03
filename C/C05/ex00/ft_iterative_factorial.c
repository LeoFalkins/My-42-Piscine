/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:55:48 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/17 09:28:21 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;

	i = nb - 1;
	total = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i > 1)
	{
		total = total * i;
		i--;
	}
	return (total);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}*/
