/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:33:04 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/16 20:13:36 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lung_num(int n)
{
	int		lung;
	long	num;

	lung = 0;
	num = n;
	if (num < 0)
		num = -num;
	if (num == 0)
		lung = 1;
	while (num > 0)
	{
		num /= 10;
		lung++;
	}
	return (lung);
}

char	*ft_itoa(int n)
{
	long	lung;
	char	*str;
	long	num;

	num = (long)n;
	lung = lung_num(num);
	str = (char *)malloc(lung + 1);
	if (!str)
		return (NULL);
	str[lung--] = '\0';
	if (num == 0)
	{
		str[0] = '0';
	}
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[lung--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

/*int main(void)
{
	int     numeri[] = {0, -1, 1, 42, -42, 100, -100, INT_MAX, INT_MIN};
	char    *res;
	int     i;

	i = 0;
	// Calcolo quanti numeri ci sono nell'array
	int size = sizeof(numeri) / sizeof(numeri[0]);

	printf("--- TEST FT_ITOA ---\n");
	while (i < size)
	{
		res = ft_itoa(numeri[i]);
		if (res)
		{
			printf("Input: %d\t | Output: %s\n", numeri[i], res);
			free(res); // Importante: liberare la memoria!
		}
		else
		{
			printf("Errore malloc per %d\n", numeri[i]);
		}
		i++;
	}
	return (0);
}*/
