/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:31:09 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/15 10:25:19 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "Test5uuuu";
	char	s2[] = "Test5uuuu";

	printf("%d", ft_strcmp(s1, s2));
}*/
