/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:53:35 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/15 22:53:38 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_lung;
	size_t	substr_lung;
	size_t	cont;

	s_lung = ft_strlen(s);
	substr_lung = len;
	cont = 0;
	if (!s)
		return (NULL);
	if (start >= s_lung)
		ft_strdup("");
	if (len > s_lung)
		substr_lung = s_lung;
	substring = (char *)malloc((substr_lung + 1) * sizeof(char *));
	if (substring == NULL)
		return (NULL);
	while (cont < substr_lung)
	{
		substring[cont] = s[start + cont];
		cont++;
	}
	substring[substr_lung] = '\0';
	return (substring);
}
/*int main()
{
	char *parola = "123uasd !";
	
	parola = ft_substr(parola, 0, 1);
	
	printf("Originale: %s\n", parola);
	free(parola);
}*/