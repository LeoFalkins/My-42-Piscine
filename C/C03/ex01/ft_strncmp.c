/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:34:08 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/16 10:31:37 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && (s1[i] == s2[i] && s1[i]))
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "TestTest5TestTest";
	char	s2[] = "TestTest1TestTest";

	printf("%d", ft_strncmp(s1, s2, 4));
	printf("%d", ft_strncmp(s1, s2, 12));
}*/
