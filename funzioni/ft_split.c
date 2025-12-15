/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 20:53:47 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/15 23:19:35 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contparole(char const *s, char c)
{
	int	cont;
	int	i;

	cont = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			cont++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cont);
}

static int	ft_parolestr(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_freestr(char **str, size_t i)
{
	while (i > 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		conparole;
	int		parolestr;

	conparole = ft_contparole(s, c);
	i = 0;
	if (!s)
		retunr (NULL);
	str = (char **)malloc(sizeof(char *) *(conparole + 1));
	if (!str)
		return (NULL);
	while (i < conparole)
	{
		while (*s == c)
			s++;
		parolestr = ft_parolestr(s, c);
		str[i] = ft_substr(s, 0, parolestr);
		if (!str[i])
			return (ft_freestr(str, i));
		s += parolestr;
		i++;
	}
	str[i] = NULL;
	return (str);
}
