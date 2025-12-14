
#include <unistd.h>
void ft_putstr_fd(char *s, int fd)
{
    size_t lung;
    
    lung = ft_strlen(s);
    if(!s)
        return;
    
    write(fd, s, ft_strlen(s));
}
