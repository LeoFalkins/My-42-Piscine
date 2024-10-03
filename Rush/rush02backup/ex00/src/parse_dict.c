/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 09:43:17 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/29 19:24:42 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	count_entries(char *file)
{
	int		fd;
	char	c[1];
	int		entry_count;

	entry_count = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, c, 1) > 0)
	{
		if (c[0] == '\n')
			entry_count++;
	}
	close(fd);
	return (entry_count);
}

char	*ft_get_nb(int fd)
{
	int			i;
	char		c[1];
	char		*str;

	i = 0;
	str = malloc(sizeof(char) * 128);
	if (!str)
		return (NULL);
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_get_literal(int fd, char *c)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * 128);
	if (!str)
		return (NULL);
	while (c[0] != '\n' && read(fd, c, 1) > 0)
	{
		str[i] = c[0];
		i++;
	}
	str[i - 1] = '\0';
	return (str);
}

t_list	*process_dict_tab(char *file)
{
	int		i;
	int		fd;
	t_list	*tab;

	i = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	tab = malloc(sizeof(t_list) * count_entries(file));
	if (!tab)
		return (NULL);
	while (i < count_entries(file))
	{
		if (!fill_entry(fd, &tab[i]))
		{
			free(tab);
			close(fd);
			return (NULL);
		}
		i++;
	}
	close(fd);
	return (tab);
}

int	fill_entry(int fd, t_list *entry)
{
	char	c[1];
	char	*tmp;

	entry->nb = ft_atoui128(ft_get_nb(fd));
	read(fd, c, 1);
	tmp = ft_get_literal(fd, c);
	if (!tmp)
		return (0);
	entry->literal = ft_strdup(tmp);
	free(tmp);
	return (1);
}
