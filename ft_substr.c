
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substring;
    size_t s_lung;
    size_t substr_lung;
    size_t cont;
    size_t lunghezza;

    s_lung = ft_strlen(s);
    substr_lung = len;
    lughezza = s_lung - start;
    cont = 0;
    if (!s)
        return(NULL);
    
    if (strat >= s_lung)
    {
        substring = (char *)malloc(1); // 1 vuol dire stringa vuota \0

    }
    if(len > lunghezza) // se len e' maggiore dei char disp, si sovrascrive substr_lung, con lunghe
    {
        substr_lung = lunghezza;
    }

    sub = (char *)malloc(substr_lung + 1); // +1 sta per \0
    /*if(!substring)
        retunr(NULL)*/

    while(cont < substr_lug) //copia
    {
        substring[cont] = s[star + cont];
        cont++;
    }

    substring[substr_lung] = '\0';

    return(substring);
}
