/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:44:46 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/15 22:53:47 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	inizio;
	size_t	fine;
	size_t	lung;

	inizio = 0;
	fine = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[inizio] && ft_strchr(set, s1[inizio]))
		inizio++;
	while (fine > inizio && ft_strrchr(set, s1[fine - 1]))
		fine--;
	lung = fine - inizio;
	str = (char *)malloc(lung +1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1 + inizio, lung + 1);
	return (str);
}
/*int	main (void)
{
	char	*parola = "omsomethingso";
	char	*parola2 = "om";
	parola = ft_strtrim(parola, parola2);
	printf("Originale: %s\n", parola);
	free(parola);
}*/