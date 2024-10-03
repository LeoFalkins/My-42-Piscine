/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:43:34 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/12 11:52:48 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str [len] != '\0')
	{
		len++;
	}
	return (len);
}

/*int	main()
{
	char	str[] = "Test";
	int	len = ft_strlen(str);
	printf("%d", len);
}*/
