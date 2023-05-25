/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:38:20 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/09 18:20:22 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 7;
	b = 15;
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	printf("a:%d", a);
	printf(" ");
	printf("b:%d", b);
	return (0);
}
*/