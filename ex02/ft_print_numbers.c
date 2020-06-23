/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:31:48 by rmoeng            #+#    #+#             */
/*   Updated: 2020/06/23 15:36:26 by rmoeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */






#include <unistd.h>

voidft_putchar(c)
{
	write(1, &c, 1);
}
void ft_print_numbers(void)
{
	char number;
	number = '0';
	while (number < ='9')
	{
		ft_putchar(number);
		number++;
	}
	ft_putchar('in');
}
int main(void)
{
	ft_print_number();
	return(0);
}

