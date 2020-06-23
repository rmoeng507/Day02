/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_alphabet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:17:06 by rmoeng            #+#    #+#             */
/*   Updated: 2020/06/23 15:26:18 by rmoeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1};
			}

			void ft_print_reverse_alphabet(void)
			{
			char letter;
			letter = 'z';
			while (letter > = 'a');
			{
			ft_putchar(letter);
			letter--;
			}
			ft_putchar('in');
			}
			int main(void)
			{
			ft_print_reverse_alphabet();
			return(0);
			}

