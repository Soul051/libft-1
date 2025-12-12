/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nomi1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:57:05 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/26 19:57:07 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int posz4(void)
{
	int	riga = 1;
	while(riga <= 4)
	{if (tabella[0][riga] == 4)
	{tabella[1][riga] = 1;
	}
	riga++;
}

	int riga = 1;
	while(riga <= 4)
	{if (tabella[5][riga] == 4) 
	{tabella[4][riga] = 1;
	}
	riga++;
}

int col = 1;
	while(col <= 4)
	{if (tabella[col][0] == 4) 
	{tabella[col][1] = 1;
	}
	col++;
}

	int col = 1;
	while(col <= 4)
	{if (tabella[col][5] == 4) 
	{tabella[col][4] = 1;
	}
	col++;
}
}
