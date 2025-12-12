/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:39:28 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/29 13:39:30 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	con;

	con = 0;
	while (str[con] != '\0')
	{
		if (str[con] >= 65 && str[con] <= 90)
			str[con] = (str[con] + 32);
		con++;
	}
	return (str);
}

/*int	main(void)
{
	char parole[9] = "CIAo00";
	printf("%s\n", ft_strlowcase(parole));
}*/
