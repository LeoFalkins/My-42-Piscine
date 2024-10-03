/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:14:06 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/12 11:42:06 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str [len] != '\0')
	{
		len++;
	}
	write(1, str, len);
}

/*int	main(void)
{
	char	str[] = "Test";

	ft_putstr(str);
}*/
