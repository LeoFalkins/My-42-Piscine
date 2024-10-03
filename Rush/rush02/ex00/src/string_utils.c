/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 10:13:08 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/29 19:26:36 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_h.h>

__uint128_t	ft_atoui128(const char *str)
{
	__uint128_t	res;

	res = 0;
	while (*str && (*str >= 9 && *str <= 13))
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		++str;
	}
	return (res);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		len;
	int		i;

	len = ft_strlen(src);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[len + 1] = '\0';
	return (dst);
}
