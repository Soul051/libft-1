/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:16:06 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/15 22:53:35 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	temp;

	temp = c;
	if (temp >= 'A' && temp <= 'B')
	{
		temp += 32;
	}
	return (temp);
}
// int main ()
// {
// 	char c;
// 	c = 'B';
// 	printf("%c", ft_tolower(c));
// }