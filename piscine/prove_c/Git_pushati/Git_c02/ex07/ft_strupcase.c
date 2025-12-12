/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:10:11 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/29 12:10:13 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	con;

	con = 0;
	while (str[con] != '\0')
	{
		if (str[con] >= 97 && str[con] <= 122)
			str[con] = (str[con] - 32);
		con++;
	}
	return (str);
}

/*int	main(void)
{
	char parole[9] = "aaa";
	printf("%s\n", ft_strupcase(parole));
}
*/
