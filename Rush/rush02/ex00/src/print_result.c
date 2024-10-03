/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 10:16:16 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/29 19:45:31 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_h.h>

__uint128_t	get_small_multiple(__uint128_t nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else
		return (nb);
}

__uint128_t	get_large_multiple(__uint128_t nb)
{
	if (nb >= ((__uint128_t)1000000000000000000ULL * 1000000000000000000ULL))
		return ((__uint128_t)1000000000000000000ULL * 1000000000000000000ULL);
	else if (nb >= ((__uint128_t)1000000000000000000ULL * 1000000000000000ULL))
		return ((__uint128_t)1000000000000000000ULL * 1000000000000000ULL);
	else if (nb >= ((__uint128_t)1000000000000000000ULL * 1000000000ULL))
		return ((__uint128_t)1000000000000000000ULL * 1000000000ULL);
	else if (nb >= ((__uint128_t)1000000000000000000ULL * 1000000ULL))
		return ((__uint128_t)1000000000000000000ULL * 1000000ULL);
	else if (nb >= ((__uint128_t)1000000000000000000ULL * 1000ULL))
		return ((__uint128_t)1000000000000000000ULL * 1000ULL);
	else if (nb >= ((__uint128_t)1000000000000000000ULL))
		return ((__uint128_t)1000000000000000000ULL);
	else
		return (get_multiple(nb));
}

__uint128_t	get_multiple(__uint128_t nb)
{
	if (nb >= 1000000000000000000ULL)
		return (1000000000000000000ULL);
	else if (nb >= 1000000000000000ULL)
		return (1000000000000000ULL);
	else if (nb >= 1000000000000ULL)
		return (1000000000000ULL);
	else if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (get_small_multiple(nb));
}

void	ft_print(__uint128_t nb, t_list *tab, int *first)
{
	int			i;
	__uint128_t	mult;

	i = 0;
	mult = get_large_multiple(nb);
	if (mult >= 100)
		ft_print(nb / mult, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].nb != mult)
		i++;
	ft_putstr(tab[i].literal);
	if (mult != 0 && nb % mult != 0)
		ft_print(nb % mult, tab, first);
}
