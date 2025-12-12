/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controlli.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:32:21 by galorenz          #+#    #+#             */
/*   Updated: 2025/10/26 14:32:21 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  int tabella1[6][6];
  tabella1[0][1] = col1top;
  tabella1[0][2] = col2top;
  tabella1[0][3] = col3top;
  tabella1[0][4] = col4top;
  tabella1[1][0] = row1left;
  tabella1[1][5] = row1right;
  tabella1[2][0] = row2left;
  tabella1[2][5] = row2right;
  tabella1[3][0] = row3left;
  tabella1[3][5] = row3right;
  tabella1[4][0] = row4left;
  tabella1[4][5] = row4right;
  tabella1[5][1] = col1bottom;
  tabella1[5][2] = col2bottom;
  tabella1[5][3] = col3bottom;
  tabella1[5][4] = col4bottom;

// controlli angoli 1 uguali 
void ft_putchar(char a[])
{
	int cont = 0;
	write(1, "Error: ", 7);
	while (a[cont] = '\0')
	{
		write(1, a[cont], 1);
		cont++;
	}
}
// angoli uguali 
int angoli11(void)
{
char str[44] = "se col1top è 1 anche row1left deve essere 1\n"//controlla angoli in alto a snistra
if (!(tabella[0][1] == 1 && tabella[1][0] == 1))
	{ return (ft_putchar(str[])
	}

char str[44] = "se col4top è 1 anche row1right deve essere 1\n"//controlla angoli in altro a destra
if (!(tabella[0][4] == 1 && tabella[1][5] == 1))
	{ return (ft_putchar(str[])
	}

char str[44] = "se row4left è 1 anche col1bottom deve essere 1\n"//controlla angoli in basso a sinistra
if (!(tabella[4][0] == 1 && tabella[5][1] == 1))
	{ return (ft_putchar(str[])
	}

char str[44] = "se row4right è 1 anche col4bottom deve essere 1\n"//controlla angoli in basso a destra
if (!(tabella[4][5] == 1 && tabella[5][4] == 1))
	{ return (ft_putchar(str[])
	}

}
/////////////////////////////////////////////////////////////////

// posizionare il 4 vicino all'1

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
///////////////////////////////////////////////////////////////
// controlli per il  3
int controllo3(void)
{
	int	riga = 1;
	while(riga <= 4)
	{if (tabella[0][riga] == 3) 
 	{ tabella[1][riga] && tabella[2][riga] != 4;
	}
	}
	riga++;
}
int riga = 1;
{
	while(riga <= 4)
	{if (tabella[5][riga] == 3) 
	{ tabella[4][riga] && tabella[3][riga] != 4;
	}
	}
	riga++;
}
int col = 1;
{
	while(col <= 4)
	{if (tabella[col][0] == 3) 
	{ tabella[col][2] && tabella[col][2] != 4;
	}
	}
	col++;
}
int col = 1;
	while(col <= 4)
	{if (tabella[col][5] == 3) 
	{ tabella[col][4] && tabella[col][2] != 4;
	}
	}
	col++;
}
///////////////////////////////////////////////////////////////
//ordine cronologico con 1 e 4 righe
int controrighe_14(void)
{
int riga = 1;
	while (riga <=4)
	{if ( tabella[0][riga] == 4 && tabella[5][riga] == 1
		{ tabella [1][riga] == 1 && \
			tabella [2][riga] == 2 && \
			tabella [3][riga] == 3 && \
			tabella [4][riga] == 4 &&;
		}
	}
	riga ++;
	while (riga <=4)
	{if ( tabella[0][riga] == 1 && tabella[5][riga] == 4
		{ tabella [1][riga] == 4 && \
			tabella [2][riga] == 3 && \
			tabella [3][riga] == 2 && \
			tabella [4][riga] == 1 &&;
		}
	}
	riga ++;
}
///////////////////////////////////////////////////////////////
//ordine cronologico con 1 e 4 col
int controllocol_14(void)
{
int col = 1;
	while (col <=4)
	{if ( tabella[col][0] == 4 && tabella[col][5] == 1
		{ tabella [col][1] == 1 && \
			tabella [col][2] == 2 && \
			tabella [col][3] == 3 && \
			tabella [col][4] == 4 &&;
		}
	}
	col ++;
	while (col <=4)
	{if ( tabella[col][0] == 1 && tabella[col][5] == 4
		{ tabella [col][1] == 4 && \
			tabella [col][2] == 3 && \
			tabella [col][3] == 2 && \
			tabella [col][4] == 1 &&;
		}
	}
	col ++;
}
 ////////////////////////////////////////////////////////////////////
// posizione 1 e 2
int controll_12(void)
{
int controllo1_2();
 int riga = 1;
 int col = 1
 while(riga <= 4)
 {if (tabella[0][riga] == 1) && (tabella[5][riga] == 2) // controlla la prima riga 
  	{	(tabella[1][riga] = 4 && tabella[4][riga] = 3)
  	}
  else
  	if (tabella[0][riga] == 2) && (tabella[5][riga] == 1)
  	{	(tabella[1][riga] = 3 && tabella[4][riga] = 4)
  	} 
 riga++;
 }
  while (col <= 4) 
  	if ( tabella[col][0] == 1 && (tabella[col][5] == 2) 
  	{	(tabella[col][] = 4 && tabella[col][4] = 3)
  	}
  else
	if ( tabella[col][0] == 2 && (tabella[col][5] == 1) 
  	{	(tabella[col][] = 3 && tabella[col][4] = 4)
  	}
	col++;
	}
//////////////////////////////////////////
//conrollo 4 
int controllo4pt1(void)
{
int col = 1;
	while(col <= 4)
	{if (tabella[col][0] == 4) //quelle di sinistra
	{tabella[col][1] = 1;
	}
	col++;
}
int col = 1;
	while(col <= 4)
	{if (tabella[col][5] == 4) // quelle di destra
	{tabella[col][4] = 1;
	}
	col++;
}
}
int controllo4pt2(void)
{
 int riga = 1;
 	while(riga <= 4)
	{if(tabella[0][riga] == 4) // prima riga
	{tabella[1][riga] = 1;
	}
	riga++;
}
int riga = 1;
	while(riga <= 4)
	{if(tabella[5][riga] == 4) // ultima riga
	{tabella[4][riga] = 1;
	}
	riga++;
}
}

