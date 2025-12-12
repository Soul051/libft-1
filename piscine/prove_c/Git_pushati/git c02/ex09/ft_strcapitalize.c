/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:44:32 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/29 13:44:34 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	con;

	con = 0;
	while (str[con] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = (str[0] - 32);
		else
		{
			if (!((str[con - 1] >= 'A' && str[con - 1] <= 'Z')
					|| (str[con - 1] >= 'a' && str[con - 1] <= 'z')
					|| (str[con - 1] >= '0' && str[con -1] <= '9')))
			{
				if (str[con] >= 'a' && str[con] <= 'z')
					str[con] = str[con] - 32;
			}
			else
			{
				if (str[con] >= 'A' && str[con] <= 'Z')
					str[con] = str[con] + 32;
			}
		}
		con++;
	}
	return (str);
}
/*
int	main(void)
{
	char parole[9] = "aaa ciao";
	printf("%s\n", ft_strcapitalize(parole));
}*/
