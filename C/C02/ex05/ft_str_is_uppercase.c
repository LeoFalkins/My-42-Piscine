/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:15:10 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/13 12:16:55 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "DDDDDDDd";
	char	str2[] = "DDDDDD";
	char	str3[] = "";
	int	a = ft_str_is_uppercase(str1);
	int	b = ft_str_is_uppercase(str2);
	int	c = ft_str_is_uppercase(str3);

	printf("%d", a);
	printf("%d", b);
	printf("%d", c);
}*/
