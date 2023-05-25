/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:17:29 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/22 17:23:20 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
char n;

n = '0';
while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}

int main(void)
{
ft_print_numbers();
return(0);
}