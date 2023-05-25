/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:48:01 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/22 19:01:30 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
}

int ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return(n);
}

int main(int argc, char *argv[])
{
char *str;

	str = argv[1];
if (argc < 2)
	write(1, "\n", 1);
else 
{
	write(1, argv[1], ft_strlen(argv[1]));
	return (0);
}
}