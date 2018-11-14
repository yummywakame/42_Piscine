/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguarnay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 13:47:28 by gguarnay          #+#    #+#             */
/*   Updated: 2018/10/27 14:48:24 by gguarnay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	rush(int x, int y)
{
	int row;
	int col;

	row = 0;
	col = 0;
	if ((x <= 0) || (y <= 0) || (x > 2147483647) || (y > 2147483647))
		return (0);
	while (++row <= y)
	{
		while (++col <= x)
		{
			if (((row == 1) && (col == 1)) || ((row == 1) && (col == x)) ||
					((row == y) && (col == 1)) || ((row == y) && (col == x)))
				ft_putchar('o');
			else if (((col > 1) && (col < x)) && ((row == 1) || (row == y)))
				ft_putchar('-');
			else if ((col == 1) || (col == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
		col = 0;
	}
	return (0);
}
