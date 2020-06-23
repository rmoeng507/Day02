/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:47:48 by rmoeng            #+#    #+#             */
/*   Updated: 2020/06/23 15:56:02 by rmoeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(c)
{
	write(1, &c, 1);
}
void ft_print_como(void)
{
	char num1;
	char num2;
	char num3;

	num1 = '0' -1;
	while(num1< = '9')
	{
		num2 = ++num1;
		while (num2 < = '9')
		{
			num3 = ++ num2 + 1;
			while (num3 < = '9')
			{
				ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3++);
				if(num1 ! = '7')
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}
ft_putchar('\n');
}
int main(void)
{
	ft_print_combo();
	return(0);
}
