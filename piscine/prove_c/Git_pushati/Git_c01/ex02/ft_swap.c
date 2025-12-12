/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:41:01 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/22 16:41:03 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 3;
	y = 5;
	printf("a prima = %d\n", x);
	printf("b prima = %d\n", y);
	ft_swap(&x, &y);
	printf("a dopo = %d\n", x);
	printf("b dopo = %d\n", y);
}*/
