/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeiring <omeiring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:54:19 by omeiring          #+#    #+#             */
/*   Updated: 2018/11/11 23:37:30 by omeiring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../incs/functions.h"

char	*remove_spaces(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	str2 = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i])
	{
		if (str[i] != ' ')
		{
			str2[j] = str[i];
			j++;
		}
		i++;
	}
	str2[j] = '\0';
	return (str2);
}

int		parse_brackets(char **str)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	if ((*str)[0] == '+' || (*str)[0] == '-')
	{
		if ((*str)[0] == '-')
			sign = -1;
		*str++;
	}
	if ((*str)[0] == '(')
	{
		*str++;
		nbr = primary_expr(str);
		if ((*str)[0] == ')')
			*str++;
		return (sign * nbr);
	}
	while ('0' <= (*str)[0] && (*str)[0] <= '9')
	{
		nbr = (nbr * 10) + (*str)[0] - '0';
		*str++;
	}
	return (sign * nbr);
}

int		multipl_expr(char **str)
{
	int		nbr1;
	int		nbr2;
	char	operator;

	nbr1 = parse_brackets(str);
	while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%')
	{
		operator = (*str)[0];
		*str++;
		nbr2 = parse_brackets(str);
		nbr1 = do_op(nbr1, nbr2, operator);
	}
	return (nbr1);
}

int		primary_expr(char **str)
{
	int		nbr1;
	int		nbr2;
	char	operator;

	nbr1 = parse_brackets(str);
	while ((*str)[0] && (*str)[0] != ')')
	{
		operator = (*str)[0];
		*str++;
		if (operator == '+' || operator == '-')
			nbr2 = multipl_expr(str);
		else
			nbr2 = parse_brackets(str);
		nbr1 = do_op(nbr1, nbr2, operator);
	}
	return (nbr1);
}

int		eval_expr(char *str)
{
	str = remove_spaces(str);
	if (!str[0])
		return (0);
	return (primary_expr(&str));
}
