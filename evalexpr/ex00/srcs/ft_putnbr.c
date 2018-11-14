/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeiring <omeiring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:20:51 by omeiring          #+#    #+#             */
/*   Updated: 2018/11/11 21:29:36 by omeiring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/functions.h"

void	ft_putnbr(int x)
{
	int nbr;

	if (x < 0)
	{
		ft_putchar('-');
		nbr = x * -1;
	}
	else
	{
		nbr = x;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}
