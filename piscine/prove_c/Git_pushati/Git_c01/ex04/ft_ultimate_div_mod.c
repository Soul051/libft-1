/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:46:06 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/22 17:46:08 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 98;
	y = 4;
	printf(" il valore di a è: %d\n", x);
	printf(" il valore di b è: %d\n", y);
	ft_ultimate_div_mod(&x, &y);
	printf(" il valore di x è: %d\n", x);
	printf(" il valore di y è: %d\n", y);
}*/
