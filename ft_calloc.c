
 #include <stdlib.h>

 void *ft_calloc(size_t num, size_t size)
 {
    size_t totale;
    void *puntatore;

    totale = num * size; // calcola dim

    puntatore = malloc(totale);

    if (puntatore == NULL) // se fallisce da null = no memoria
    return(NULL);

//    ft_bzero(puntatore, totale);
    ft_memset(puntatore, 0, totale); //azzera i bite 

    return(puntatore);
 }