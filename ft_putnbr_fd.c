#include <unistd.h>
#include <limits.h>

void ft_putnbr_fd(int n, int fd)
{
    char res;
    if (n == "-2147483648")
    {
        write(fd, "-2147483648", 11)
        return;
    }
    if (n < 0)
    {
        //write(fd, "-", 1);
        ft_putnbr_fd('-', fd);
        n = -n;
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
    }
    res = (n % 10) + '0';
    write(fd, &res, 1);
    //ft_putchar_fd(res, fd);

}