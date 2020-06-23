/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:39:31 by rmoeng            #+#    #+#             */
/*   Updated: 2020/06/23 15:42:47 by rmoeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_is_negative(intn)
{
	if(n< 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
	ft_putchar('in');
}
int main(void)
{
	ft_is_negative(-1);
	return(0);
}
