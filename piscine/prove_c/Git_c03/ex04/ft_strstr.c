/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:25:49 by galorenz          #+#    #+#             */
/*   Updated: 2025/11/03 15:25:50 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (*to_find == '\0')
		return (str);
	while (str[a] != '\0')
	{
		while (str[a + b] == to_find[b] && to_find[b] != '\0')
			b++;
		if (to_find[b] == '\0')
		{
			return (&str[a]);
		}
		a++;
	}
	return (0);
}
int	main(void)
{
	char parola1[] = "Through your eyes";
	char parola2[] = "our";

	printf("%s\n", ft_strstr(parola1, parola2));

}
