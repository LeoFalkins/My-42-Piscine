/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:57:03 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/27 12:39:40 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	total;
	int	sign;
	int	i;

	i = 0;
	total = 0;
	sign = 0;
	while (str[i] <= 9 && str[i] >= 13 || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10;
		total = total + (str[i] - '0');
		i++;
	}
	if (sign % 2 == 1)
		return (-total);
	return (total);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "-+---+-+++-----+-6546454654sd45644";
	char	str2[] = "65465456";
	char	str3[] = "---++++46546548";

	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
}*/
