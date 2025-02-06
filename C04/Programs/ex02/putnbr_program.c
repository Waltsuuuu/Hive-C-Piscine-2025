#include <unistd.h>

void ft_putnbr(int nb)
{
	char digit;

	//Edge case for largest -int, print it manually
    if (nb == -2147483648) 
    {
        write(1, "-2147483648", 11);
        return ;
    }
	//If negative number, print - and convert the int to positive.	
    if (nb < 0) 
    {
        write(1, "-", 1);
        nb = -nb;
    }
	//If number has 2 or more digits, divide by 10 to "lose" the last digit.
	//Call the functon again with the new nb.
    if (nb >= 10) 
    {
        ft_putnbr(nb / 10);
    }
    digit = (nb % 10) + '0';
    write(1, &digit, 1);
}

int		main() 
{
    ft_putnbr(123);
    return 0;
}