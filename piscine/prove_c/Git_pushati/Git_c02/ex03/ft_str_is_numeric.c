/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:30:59 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/27 19:31:01 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	con;

	con = 0;
	if (str == NULL || str[0] == '\0')
	{
		return (1);
	}
	while (str[con] != '\0')
	{
		if (!(str[con] >= '0' && str[con] <= '9'))
			return (0);
		con++;
	}
	return (1);
}
/*
int	main(void)
{
	char numero[20] = "1234";
	printf("%d\n", ft_str_is_numeric(numero));
}*/
