/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:20:39 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/23 10:57:44 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
char *str;
int n;
int i;

str = argv[1];
n = 0;
i = 0;
if (argc < 2)
	write(1, "\n", 1);
else
{	
	while (str[n] != '\0')
		{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			i = str[n] - 96;
			while (i > 0)
			{
				write(1, &str[n], 1);
				i--;
			}
		}
		if (str[n] >= 'A' && str[n] <= 'Z')
		{
			i = str[n] - 64;
			while (i > 0)
			{
				write(1, &str[n], 1);
				i--;
			}
		}
		n++;
		}
write(1, "\n", 1);
}
return (0);
}