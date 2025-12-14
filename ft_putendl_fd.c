#include <unistd.h>

void ft_putendl_fd(char *s, int fd);
{
    if (!s)
    return;

    //ft_putstr_fd(s, fd);
    //ft_putchar_fd('\n', fd);

    while (*s)
    {
        write(fd, s, 1);
        s++;
    }
    write(fd, "\n", 1)
}