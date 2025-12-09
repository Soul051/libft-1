/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:56:42 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/06 19:11:06 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	a;
	int	b;
	int	num;
	size_t c;

	b = 1;
	a = 0;
	num = 0;
	c = 0;
	
	while ((str[a] == ' ' ) || (str[a] >= 9 && str[a] <= 13))
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b = b * -1;
		a++;
	}
	if (c > 1)
	{
		return (0);
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		num = num * 10 + (str[a] - '0');
		a++;
	}
	return (num * b);
}
/*int	main()
{
	char numero[] = " ---+--+1234ab567";

	
	printf("%d\n", ft_atoi(numero));
}
int	main(int argc, char **argv)
{
	if ( argc != 2)
		return(1);

	int	num;
	num = ft_atoi(argv[1]);
	
	printf("%d\n", num);
}*/
