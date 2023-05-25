/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:53:56 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/23 12:29:32 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void rot_13(char *a)
{
	int c;

	c = 0;
	while (a[c] != '\0')
	{
	if ((a[c] >= 'A' && a[c] <= 'M') || (a[c] >= 'a' && a[c] <= 'm'))
		{
		ft_putchar(a[c] + 13);
		}
	else if ((a[c] >= 'N' && a[c] <= 'Z') || (a[c] >= 'n' && a[c] <= 'z'))
		{
		ft_putchar(a[c] - 13);
		}
	else
	ft_putchar(a[c]);
	c++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	char *str;

	str = argv[1];
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	rot_13(str);
	return (0);
}