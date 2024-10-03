/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 09:29:40 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/16 10:35:10 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ret;
	unsigned int	i;

	ret = dest;
	i = 0;
	while (*dest)
		dest++;
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (ret);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "123456789";
	char	s2[] = "abcdefghij";

	printf("%s", ft_strncat(s1, s2, 5));
}*/
