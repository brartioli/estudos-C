/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:41:20 by bfernan2          #+#    #+#             */
/*   Updated: 2025/04/03 15:08:46 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
void	putchar(char c)
{
	write(1, &c, 1);
}
int	main(int argc, char *argv[])
{
	int i = 0;
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		if(argv[1][i] == 'z')
			argv[1][i] = 'a';
		else if(argv[1][i] == 'Z')
			argv[1][i] = 'A';
		else if(argv[1][i] >= 'A' && argv[1][i] <= 'z')
			argv[1][i] = argv[1][i] + 1;
		putchar(argv[1][i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
