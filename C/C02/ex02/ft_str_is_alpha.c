/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:51:41 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/16 10:28:56 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (((str[i] >= 'a' && str[i] <= 'z'))
			|| ((str[i] >= 'A' && str[i] <= 'Z')))
			i++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "dddddd1";
	char	str2[] = "dddddd";
	char	str3[] = "";
	int	a = ft_str_is_alpha(str1);
	int	b = ft_str_is_alpha(str2);
	int	c = ft_str_is_alpha(str3);

	printf("%d", a);
	printf("%d", b);
	printf("%d", c);
}*/
