/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeiring <omeiring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 16:02:22 by omeiring          #+#    #+#             */
/*   Updated: 2018/11/04 20:14:59 by omeiring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		match(char *s1, char *s2);

int		main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%i", match(argv[1], argv[2]));
	}
	else
	{
		printf("Please input 2 string parameters");
	}
	return (0);
}
