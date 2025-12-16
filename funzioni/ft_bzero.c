/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:57:59 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/16 20:22:17 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n > 0)
	{
		*a = '\0';
		a++;
		n--;
	}
}
/*int	main(void)
{
	char parola[] = "lonely vampire";
	printf("parola prima: %s\n", parola);
	ft_bzero(parola, 3);
	printf("parola dopo: %s\n", parola);
	
}*/
