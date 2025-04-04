/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:51:25 by bfernan2          #+#    #+#             */
/*   Updated: 2025/04/02 19:19:55 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
void	ft_write_number(int number)
{
	if( number > 9)
	{
		ft_write_number(number / 10);
	}
	write(1, &"0123456789"[number % 10], 1);
}
int main ()
{
	int number = 1;
	while (number <= 100)
	{
		if(number % 3 == 0 && number % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if(number % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if(number % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			ft_write_number(number);
		}
		write(1, "\n", 1);
		number++;
	}
}
