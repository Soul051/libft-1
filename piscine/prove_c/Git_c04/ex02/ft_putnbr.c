/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:47:39 by galorenz          #+#    #+#             */
/*   Updated: 2025/11/04 18:47:40 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	numero;
	long	num;

	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr (num / 10);
		numero = (num % 10) + '0';
	}
	else
	{
		numero = (num + '0');
	}
	write(1, &numero, 1);
}
/*int	main(void)
{
	ft_putnbr(1);
}*/
