/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:26:55 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/25 16:37:53 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	size;

	size = ft_strlen(base);
	i = 0;
	if (size < 2)
		return (0);
	while (i < size - 1)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (j < size)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_index(char current, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (current == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	total;
	int	sign;

	total = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && base_index(*str, base) != -1)
	{
		total = total * ft_strlen(base) + base_index(*str, base);
		str++;
	}
	return (total * sign);
}

char	*ft_putnbr_base(int nbr, char *base, int *curr, char *conv)
{
	long	i;
	int		size;

	size = ft_strlen(base);
	i = nbr;
	if (i < 0)
	{
		conv[(*curr)++] = '-';
		i *= -1;
	}
	if (i >= size)
	{
		ft_putnbr_base(i / size, base, curr, conv);
		ft_putnbr_base(i % size, base, curr, conv);
	}
	else
		conv[(*curr)++] = base[i];
	return (conv);
}
