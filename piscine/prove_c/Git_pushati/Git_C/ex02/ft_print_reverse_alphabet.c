/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:07:37 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/16 12:07:41 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 'z';
	while (i >= 'a')
	{
		write(1, &i, 1);
		i --;
	}
}

/*int	main(void)

{
	ft_print_reverse_alphabet();
	return (0);
}*/
