/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:15:09 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/04 22:15:32 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	unsigned char temp;
	temp = c;
	
	if (temp >= 'a' && temp <= 'z')
	{
		temp -= 32;
	}
			return (temp);
}
// int main()
// {
// 	char c;
// 	c = 'a';
// 	printf("%c", ft_toupper(c));
// }