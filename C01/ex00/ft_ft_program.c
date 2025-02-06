#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main() {
    int my_number;
    
    my_number = 10;
    printf("Val before function = %d \n", my_number);
    ft_ft(&my_number);
    printf("Val after func = %d", my_number);

    return 0;
}
