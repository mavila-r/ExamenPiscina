/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:03:32 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/22 19:07:11 by mavila-r         ###   ########.fr       */
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
int n;

n = argc - 1;
	str = argv[n];
if (argc < 2)
	write(1, "\n", 1);
else 
{
	write(1, argv[n], ft_strlen(argv[n]));
	return (0);
}
}