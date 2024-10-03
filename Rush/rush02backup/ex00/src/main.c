/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:57:33 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/29 19:25:57 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	is_valid_num(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (!(num[i] >= '0' && num[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

void	case_one(char **av, t_list *tab, __uint128_t *n, int *first)
{
	if (!is_valid_num(av[1]))
	{
		ft_putstr("Error\n");
		return ;
	}
	*n = ft_atoui128(av[1]);
	if (*n == (__uint128_t)-1)
	{
		ft_putstr("Error\n");
		return ;
	}
	tab = process_dict_tab("./dicts/numbers.dict");
	if (!tab)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	ft_print(*n, tab, first);
}

void	case_two(char **av, t_list *tab, __uint128_t *n, int *first)
{
	if (!is_valid_num(av[2]))
	{
		ft_putstr("Error\n");
		return ;
	}
	*n = ft_atoui128(av[2]);
	if (*n == (__uint128_t)-1)
	{
		ft_putstr("Error\n");
		return ;
	}
	tab = process_dict_tab(av[1]);
	if (!tab)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	ft_print(*n, tab, first);
}

int	main(int ac, char **av)
{
	t_list		*tab;
	__uint128_t	number;
	int			*first;
	int			addr_first;

	addr_first = 1;
	first = &addr_first;
	number = 0;
	tab = NULL;
	if (ac == 2)
		case_one(av, tab, &number, first);
	else if (ac == 3)
		case_two(av, tab, &number, first);
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
}
