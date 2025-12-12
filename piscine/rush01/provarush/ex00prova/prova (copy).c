#include <unistd.h>
#include <stdio.h>



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
       /* tabella[6][6] ={
                {"", "col1top", "col2top", "col3top", "col4top", ""},
                {"row1left", "", "", "", "", "row1right"},
                {"row2left", "", "", "", "", "row2right"},
                {"row3left", "", "", "", "", "row3right"},
                {"row4left", "", "", "", "", "row4right"},
                {"", "col1bottom", "col2bottom", "col3tbottom", "col4bottom", ""},*/
};

  int tabella[6][6];
  tabella[0][1] = col1top;
  tabella[0][2] = col2top;
  tabella[0][3] = col3top;
  tabella[0][4] = col4top;
  tabella[1][0] = row1left;
  tabella[1][5] = row1right;
  tabella[2][0] = row2left;
  tabella[2][5] = row2right;
  tabella[3][0] = row3left;
  tabella[3][5] = row3right;
  tabella[4][0] = row4left;
  tabella[4][5] = row4right;
  tabella[5][1] = col1bottom;
  tabella[5][2] = col2bottom;
  tabella[5][3] = col3bottom;
  tabella[5][4] = col4bottom;
   // bisogna dire che se il numero inserito è 0 da errore  
 
 
 
 
 if ( tabella[1][0] == 4 && tabella[1][5] == 1 { //scrivere se ci sono inizio riga con 4 e fine con 1 scrive i numeri in ordine 
 tabella[1][1] = 1;
 tabella[1][2] = 2;
 tabella[1][3] = 3;
 tabella[1][4] = 4;
 
 // per tutti i 4 nella riga metti un 1 sotto
 
 int riga = 1;
 while(riga <= 4)
 {  if (tabella[0][riga] == 4) // controlla la prima riga per vedere se ci sono 4 in quel caso nella riga sottostante mette un 1
  { tabella[1][riga] = 1;
  //bisogna farlo stampare
  }
  riga++;
}



 int riga = 1;
 while(riga <= 4)
 {  if (tabella[5][riga] == 4) // ultima riga
  { tabella[4][riga] = 1;
  //bisogna farlo stampare
  }
  riga++;
}




int col = 1;
 while(col <= 4)
 {  if (tabella[col][0] == 4) //quelle di sinistra
  { tabella[col][1] = 1;
  //bisogna farlo stampare
  }
  col++;
}


int col = 1;
 while(col <= 4)
 {  if (tabella[col][5] == 4) // quelle di destra
  { tabella[col][4] = 1;
  //bisogna farlo stampare
  }
  col++;
}


 int riga = 1;
 while(riga <= 4)
 {  if (tabella[0][riga] == 3) // se  c'e' un 3 nella riga quelle sotto sono diverse da 4
  { tabella[1][riga] =! 4;
	tabella[2][riga] =! 4;
  //bisogna farlo stampare
  }
  riga++;
}

// angoli uguali 
char str[44] = "se col1top è 1 anche row1left deve essere 1\n"
if (!(tabella[0][1] == 1 && tabella[1][0] == 1)
	{ return (ft_putchar(str[])
	}
	
	
char str[44] = "se col1top è 1 anche row1left deve essere 1\n"
if (!(tabella[0][1] == 1 && tabella[1][0] == 1)
	{ return (ft_putchar(str[])
	}

char str[44] = "se col1top è 1 anche row1left deve essere 1\n"
if (!(tabella[0][1] == 1 && tabella[1][0] == 1)
	{ return (ft_putchar(str[])
	}
	
char str[44] = "se col1top è 1 anche row1left deve essere 1\n"
if (!(tabella[0][1] == 1 && tabella[1][0] == 1)
	{ return (ft_putchar(str[])
	}

char str[44] = "se col1top è 1 anche row1left deve essere 1\n"
if (!(tabella[0][1] == 1 && tabella[1][0] == 1)
	{ return (ft_putchar(str[])
	}
