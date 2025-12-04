/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:17:14 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/04 22:16:45 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	cont;

	cont = 0;
	while (str[cont] != '\0')
		cont ++;
	return (cont);
}
/*int	main(void)
{
	char parola1[] = "asd ass a";

	printf("%d\n", ft_strlen(parola1));
	printf("%lu\n", strlen(parola1));
}*/
