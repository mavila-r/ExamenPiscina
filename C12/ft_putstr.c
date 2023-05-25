/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:11:48 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/09 18:21:25 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		ft_putchar(str[num]);
		num++;
	}
}

/*int	main(void)
{
	char	*str;

	str = "la madre que te parió";
	ft_putstr(str);
	return (0);
}
*/