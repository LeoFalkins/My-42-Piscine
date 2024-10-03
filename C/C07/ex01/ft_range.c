/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:39:33 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/23 13:28:30 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ret;

	i = 0;
	if (min >= max)
		return (NULL);
	ret = malloc(sizeof(int) * (max - min));
	if (!ret)
		return (NULL);
	while (i < (max - min))
	{
		ret[i] = min + i;
		i++;
	}
	return (ret);
}
