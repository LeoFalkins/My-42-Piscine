/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:04:26 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/14 15:41:29 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	len;

	len = 0;
	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main()
{
	char	dest[50];
	char	src[] = "Test TEst TEFTEFEVDD";
	ft_strcpy(dest, src);

	printf("%s", dest);
	return (0);
}*/
