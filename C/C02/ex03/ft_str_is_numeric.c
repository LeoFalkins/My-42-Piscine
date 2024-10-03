/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:51:43 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/13 12:06:37 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "51515151d";
	char	str2[] = "2212154";
	char	str3[] = "";
	int	a = ft_str_is_numeric(str1);
	int	b = ft_str_is_numeric(str2);
	int	c = ft_str_is_numeric(str3);

	printf("%d", a);
	printf("%d", b);
	printf("%d", c);
}*/
