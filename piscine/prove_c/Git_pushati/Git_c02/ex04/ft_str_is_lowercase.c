/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 20:06:04 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/27 20:06:07 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	con;

	con = 0;
	if (str == NULL || str[0] == '\0')
	{
		return (1);
	}
	while (str[con] != '\0')
	{
		if (!(str[con] >= 'a' && str[con] <= 'z'))
			return (0);
		con++;
	}
	return (1);
}
/*
int	main(void)
{
	char parole[8] = "aaaaSa";
	printf("%d\n", ft_str_is_lowercase(parole));
}
*/
