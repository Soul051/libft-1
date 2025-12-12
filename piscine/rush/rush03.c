/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:49:09 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/19 15:49:11 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int length, char lcorner, char filler, char rcorner)
{
	int	i;
	
	if (length > 0)
	{
		ft_putchar(lcorner);
		i = 2;
		while ( i <= length - 1)
		{
			ft_putchar(filler);
			i++;
		}
		if (length > 1)
		{
			ft_putchar(rcorner);
		}
	ft_putchar('\n');
	}
}
void	rush(int length, int height)
{
	int i;
	
	if (height > 0)
	{
		ft_print_line(length, 'A', 'B', 'C');
		i = 2;
		while ( i <= height - 1)
		{
			ft_print_line(length, 'B', ' ', 'B');
			i++;
		}
		if (height > 1)
		{
			ft_print_line(length, 'A', 'B', 'C');
		}
	}
}
