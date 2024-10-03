/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:34:42 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/19 15:21:45 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_checker(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (i < ft_strlen(base) - 1)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	i;

	i = nbr;
	if (!(base_checker(base)))
		return ;
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
	}
	if (i >= ft_strlen(base))
	{
		ft_putnbr_base(i / ft_strlen(base), base);
		ft_putnbr_base(i % ft_strlen(base), base);
	}
	else
		ft_putchar(base[i]);
}

/*int	ft_atoi(char *str)
{
	int	total;
	int	sign;

	total = 0;
	sign = 0;
	while (*str == ' ' || *str == '\n' || *str == '\r' || *str == '\f'
		|| *str == '\t' || *str == '\v' || *str == '+')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		total *= 10;
		total += (*str - '0');
		str++;
	}
	if (sign % 2 == 1)
		return (-total);
	return (total);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
	else
		return (0);
}*/
