/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:52:40 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/30 15:52:44 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//come funziona argc e arv
#include <unistd.h>
//es. 
char *ft_strupcase(char *str)
{
int i;

i=0;
	while(str[i])
	{
		if ( str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] -32;
			}
			i++;
		}
		return (str);
	}
int	main( int argc, char **argv)
{
	if ( argc != 2) // in questo caso si usa per una sola stringa quindi se e' maggiore non va bene
	{
	write(1, "error\n", 6);
	return(1);
	}
	
	ft_strupcase(argv[1]);
	
	int i;
	
	i = 0;
	while ( argv[1]/* e' la stringa con la parola perche' argv [0] e' l'output*/ [i] != '\0')
	{
	write(1, &argv[1][i], 1);
	i++;// aumenta il counter per scrivere ogni lettera 
		write(1, "\n", 1); 
	}
	//write(1, "\n", 1);
	return(0);
}
