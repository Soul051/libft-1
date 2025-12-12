/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:21:44 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/22 17:21:54 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	divisione;
	int	resto;

	a = 23;
	b = 3;
	printf(" il valore di a è: %d\n", a);
	printf(" il valore di b è: %d\n", b);
	ft_div_mod(a, b, &divisione, &resto);
	printf(" risultato di a/b è: %d\n", divisione);
	printf(" risultato di a%%b è: %d\n", resto);
}*/
