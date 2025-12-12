/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:58:55 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/29 11:58:57 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	con;

	con = 0;
	if (str == NULL || str[0] == '\0')
	{
		return (1);
	}
	while (str[con] != '\0')
	{
		if (!(str[con] >= 'A' && str[con] <= 'Z'))
			return (0);
		con++;
	}
	return (1);
}
/*
int	main(void)
{
	char parole[8] = "123.A";
	printf("%d\n", ft_str_is_uppercase(parole));
}
*/
