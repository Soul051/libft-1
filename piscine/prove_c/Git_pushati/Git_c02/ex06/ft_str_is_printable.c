/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:01:48 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/29 12:01:49 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	con;

	con = 0;
	if (str == NULL || str[0] == '\0')
	{
		return (1);
	}
	while (str[con] != '\0')
	{
		if (!(str[con] >= 32 && str[con] <= 126))
			return (0);
		con++;
	}
	return (1);
}

/*int	main(void)
{
	char parole[8] = "he\nlo";
	printf("%d\n", ft_str_is_printable(parole));
}
*/
