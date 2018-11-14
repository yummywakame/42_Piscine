/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeiring <omeiring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:35:36 by omeiring          #+#    #+#             */
/*   Updated: 2018/11/11 21:31:03 by omeiring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		do_op(int nbr1, int nbr2, char operator)
{
	if (operator == '+')
	{
		return (nbr1 + nbr2);
	}
	else if (operator == '-')
	{
		return (nbr1 - nbr2);
	}
	else if (operator == '/')
	{
		return (nbr1 / nbr2);
	}
	else if (operator == '*')
	{
		return (nbr1 * nbr2);
	}
	else if (operator == '%')
	{
		return (nbr1 % nbr2);
	}
	return (0);
}
