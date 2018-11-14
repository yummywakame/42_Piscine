/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeiring <omeiring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 15:46:32 by omeiring          #+#    #+#             */
/*   Updated: 2018/11/04 21:21:47 by omeiring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		match(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s2 == '*')
		{
			if (match(s1, s2 + 1))
			{
				return (1);
			}
			if (*s1 && match(s1 + 1, s2))
			{
				return (1);
			}
			return (0);
		}
		else
		{
			if (*s1++ != *s2++)
			{
				return (0);
			}
		}
	}
	return (1);
}