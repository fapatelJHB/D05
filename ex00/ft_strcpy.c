/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fapatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:39:15 by fapatel           #+#    #+#             */
/*   Updated: 2020/07/17 11:34:38 by fapatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

char	ft_strcpy(char *dest, char *scr)

{
	int i;
	i = 0;
		while ( scr [i] )
		{
			dest [i] = scr [i];
			i = i + 1;
		}
	dest [i] = '\0';
	return (*dest);
}
