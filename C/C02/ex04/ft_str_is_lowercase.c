/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:11:10 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/13 12:14:25 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "sjdhfjshfjsD";
	char	str2[] = "jshdshdjsh";
	char	str3[] = "";
	int	a = ft_str_is_lowercase(str1);
	int	b = ft_str_is_lowercase(str2);
	int	c = ft_str_is_lowercase(str3);

	printf("%d", a);
	printf("%d", b);
	printf("%d", c);
}*/
