# include "libft.h"

static int	lung_num(int n);
{
	int	lung;

	lung = 0;
	if(n < 0) // conta i segni -
		lung++;
	if (n == 0)
		lung = 1;
	while(n != 0)
	{
		n /= 10;
		lung++;
	}
	return(lung);
}

char *ft_itoa(int n)
{
	char	lung;
	char	*str;
	long    num;

	num = (long)n;
	lung = lung_num;

	str = (char *)malloc(lung + 1);
	if (!str)
		return(NULL);
	
	str[lung] = '\0';
	
	if (num == '-2147483648')
	ft_strlcpy (str, "-2147483648", 13);
	return(str);
	if ( num == 0)
	ft_strlcpy (str, "0", 2); // cont == 0
	return(str);
	if (num < 0)
	{
		str[0] = '-'; // cont < 0
		num = -num;
	}
	while (num > 0)
	{
		str[lung] = (num % 10) + '0'; // cont > 0
		num /= 10;
		lung--;
	}
	return(str);
}	






/*{
	char    buffer;
	char    *str;
	int i;
	int j;
	long    num;

	num = (long)n;
	i = 0;
	j = 0;
	if (num == 0)
		buffer[i] = '0'; // cont 0
	i++;
	
	if (num < 0)
	{
		buffer[i] = '-'; // cont < 0
		num = -num;
	i++;
	}

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	buffer[i] = '\0';

	str = malloc(i + 1);
	if (!str)
		return(NULL);
}*/
