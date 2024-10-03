/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:25:01 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/26 13:56:44 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_putnbr_base(int nbr, char *base, int *curr, char *conv);
int		ft_atoi_base(char *str, char *base);
int		base_index(char current, char *base);
int		base_checker(char *base);
int		ft_strlen(char *str);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		conv_from_base;
	char	*conv;
	int		curr;

	if (!base_checker(base_from) || !base_checker(base_to))
		return (NULL);
	conv_from_base = ft_atoi_base(nbr, base_from);
	conv = malloc(sizeof(char) * 34);
	if (!conv)
		return (NULL);
	curr = 0;
	ft_putnbr_base(conv_from_base, base_to, &curr, conv);
	conv[curr] = '\0';
	return (conv);
}
