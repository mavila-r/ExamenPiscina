/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:49:02 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/23 16:36:22 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}
	
int main(int argc, char *argv[])
{	
int l;

	if (argc == 2)
		{
		l = ft_strlen(argv[1]);
		while (l--)
		{
			write(1, &argv[1][l], 1);
		}
		}
	write(1, "\n", 1);
}