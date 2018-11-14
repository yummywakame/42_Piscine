/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeiring <omeiring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:42:31 by omeiring          #+#    #+#             */
/*   Updated: 2018/11/11 23:35:44 by omeiring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

char	*remove_spaces(char *str);
int		parse_brackets(char **str);
int		primary_expr(char **str);
int		multipl_expr(char **str);
int		eval_expr(char *str);
int		do_op(int nb1, int nb2, char op);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_strlen(char *str);

#endif
