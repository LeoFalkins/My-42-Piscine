/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:09:44 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/15 09:01:25 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "kjadfjkdafjkadslg";
	char	str2[] = "\n\r\t\f\v";
	char	str3[] = "jsdgf\n";
	char	str4[] = "";
	int	a = ft_str_is_printable(str1);
	int	b = ft_str_is_printable(str2);
	int	c = ft_str_is_printable(str3);
	int	d = ft_str_is_printable(str4);

	printf("%d", a);
	printf("%d", b);
	printf("%d", c);
	printf("%d", d);
}*/
