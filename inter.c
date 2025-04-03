/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:29:36 by bfernan2          #+#    #+#             */
/*   Updated: 2025/04/03 19:09:07 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if( s1[i] == s2[j])
			{
				ft_putchar(s1[i]);
			}
			j++;
		}
		i++;
	}
}
int	main(int argc, char *argv[])
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	inter(argv[1], argv[2]);
	return (0);
}
