/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:48:16 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/27 17:48:18 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	con;

	con = 0;
	if (str == NULL || str[0] == '\0')
	{
		return (1);
	}
	while (str[con] != '\0')
	{
		if (!((str[con] >= 'A' && str[con] <= 'Z')
				|| (str[con] >= 'a' && str[con] <= 'z')))
			return (0);
		con++;
	}
	return (1);
}

/*int main (void)
{
	char parola[8] = "...aaA";
	printf("%d\n", ft_str_is_alpha(parola));
}*/
