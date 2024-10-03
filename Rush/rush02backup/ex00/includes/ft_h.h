/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:36:36 by lpolizzi          #+#    #+#             */
/*   Updated: 2024/09/29 19:46:10 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

// Structure to store the dictionnary
typedef struct s_list
{
	__uint128_t	nb;
	char		*literal;
}				t_list;

// String Utils
__uint128_t		ft_atoui128(const char *str);
int				ft_strlen(char *str);
char			*ft_strdup(char *src);
void			ft_putstr(char *str);

// Main functions to check if num is valid and differentiate between cases
void			case_one(char **av, t_list *tab, __uint128_t *n, int *first);
void			case_two(char **av, t_list *tab, __uint128_t *n, int *first);
int				is_valid_num(char *num);

// Functions to process the dictionnary and store it in a t_list tab
t_list			*process_dict_tab(char *file);
int				fill_entry(int fd, t_list *entry);
char			*ft_get_literal(int fd, char *c);
char			*ft_get_nb(int fd);
int				count_entries(char *file);

// Functions to "calculate" and print the solution
__uint128_t		get_small_multiple(__uint128_t nb);
__uint128_t		get_multiple(__uint128_t nb);
__uint128_t		get_large_multiple(__uint128_t nb);
void			ft_print(__uint128_t nb, t_list *tab, int *first);

#endif
