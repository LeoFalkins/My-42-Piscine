/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:29:28 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/19 11:42:46 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ret;

	ret = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret);
}

int	ft_final_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ret;

	i = 0;
	if (size == 0)
	{
		ret = malloc(sizeof(char));
		if (ret == NULL)
			return (NULL);
		*ret = 0;
		return (ret);
	}
	ret = malloc(sizeof(char) * ft_final_len(size, strs, sep));
	ret[0] = '\0';
	if (ret == NULL)
		return (NULL);
	while (i < size)
	{
		ft_strcat(ret, strs[i]);
		if (i < size -1)
			ft_strcat(ret, sep);
		i++;
	}
	return (ret);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	char	sep[] = "|-|";
	char	*ret = ft_strjoin(argc, argv, sep);

	printf("%s", ret);
	free(ret);
}*/
