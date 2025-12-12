#include <unistd.h>
#include <stdio.h>

int tabella()
{
	tabella[4][4];





























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



int     main()
{
       /*tabella1[6][6] ={
                {"*", "col1top", "col2top", "col3top", "col4top", "*"},
                {"row1left", "", "", "", "", "row1right"},
                {"row2left", "", "", "", "", "row2right"},
                {"row3left", "", "", "", "", "row3right"},
                {"row4left", "", "", "", "", "row4right"},
                {"", "col1bottom", "col2bottom", "col3tbottom", "col4bottom", ""},*/
};

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
  
  
  
   // bisogna dire che se il numero inserito è 0 da errore  
   
   
   
 
 
 
 
 if ( tabella1[1][0] == 4 && tabella1[1][5] == 1 { //scrivere se ci sono inizio riga1con 4 e fine con 1 scrive i numeri in ordine 
 tabella1[1][1] = 1;
 tabella1[1][2] = 2;
 tabella1[1][3] = 3;
 tabella1[1][4] = 4;
 
 // per tutti i 4 nella riga1metti un 1 sotto
 
 int riga1= 1;
 while(riga1<= 4)
 {  if (tabella1[0][riga] == 4) // controlla la prima riga1per vedere se ci sono 4 in quel caso nella riga1sottostante mette un 1
  { tabella1[1][riga] = 1;
  //bisogna farlo stampare
  }
  riga++;
}



 int riga1= 1;
 while(riga1<= 4)
 {  if (tabella1[5][riga] == 4) // ultima riga
  { tabella1[4][riga] = 1;
  //bisogna farlo stampare
  }
  riga++;
}




int col1= 1;
 while(col1<= 4)
 {  if (tabella1[col][0] == 4) //quelle di sinistra
  { tabella1[col][1] = 1;
  //bisogna farlo stampare
  }
  col++;
}


int col1= 1;
 while(col1<= 4)
 {  if (tabella1[col][5] == 4) // quelle di destra
  { tabella1[col][4] = 1;
  //bisogna farlo stampare
  }
  col++;
}


 int riga1= 1;
 while(riga1<= 4)
 {  if (tabella1[0][riga] == 3) // se  c'e' un 3 nella riga1quelle sotto sono diverse da 4
  { tabella1[1][riga] =! 4;
	tabella1[2][riga] =! 4;
  //bisogna farlo stampare
  }
  riga++;
}

// angoli uguali 
char str[44] = "se col1top è 1 anche row1left deve essere 1\n"
if (!(tabella1[0][1] == 1 && tabella1[1][0] == 1)
	{ return (ft_putchar(str[])
	}
	//controlla angoli in alto a snistra
	
char str[44] = "se col4top è 1 anche row1right deve essere 1\n"
if (!(tabella1[0][4] == 1 && tabella1[1][5] == 1)
	{ return (ft_putchar(str[])
	}
	//controlla angoli in altro a destra

char str[44] = "se row4left è 1 anche col1bottom deve essere 1\n"
if (!(tabella1[4][0] == 1 && tabella1[5][1] == 1)
	{ return (ft_putchar(str[])
	}
	//controlla angoli in basso a sinistra
	
char str[44] = "se row4right è 1 anche col4bottom deve essere 1\n"
if (!(tabella1[4][5] == 1 && tabella1[5][4] == 1)
	{ return (ft_putchar(str[])
	}
	//controlla angoli in basso a destra
	
	
//controllo dei 2 

 int riga1= 1;
 while(riga1<= 4)
 {  if (tabella1[0][riga] == 2 && tabella1[2][riga] = 4) 
 	{ tabella1[1]riga] == 1;
 	}
  }
  riga++;

 int riga1= 1;
 while(riga1<= 4)
 {  if (tabella1[5][riga] == 2 && tabella1[2][riga] = 4) 
 	{ tabella1[4]riga] == 1;
 	}
  }
  riga++;


 int riga1= 1;
 while(riga1<= 4)
 {  if (tabella1[0][riga] == 2 && tabella1[2][riga] = 4) 
 	{ tabella1[1]riga] == 1;
 	}
  }
  riga++;
  
 int col1= 1;
 while(col1<= 4)
 {  if (tabella1[col][0] == 2 && tabella1[col][2] = 4) 
 	{ tabella1[col]1] == 1;
 	}
  }
  col++;
  
   int col1= 1;
 while(col1<= 4)
 {  if (tabella1[col][5] == 2 && tabella1[col][3] = 4) 
 	{ tabella1[col]4] == 1;
 	}
  }
  col++;






