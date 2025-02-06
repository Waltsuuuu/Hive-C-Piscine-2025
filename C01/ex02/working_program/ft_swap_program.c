#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int *b);

int main()
{
    int x = 11;
    
    int y = 22;
    
	printf("Values before function \n x = %d and y = %d \n", x, y);

    ft_swap(&x, &y);
    
    printf("Values AFTER function \n x = %d and y = %d", x, y );
    
    return 0;
}

void    ft_swap(int *a, int *b)
{
    int hold_a_value;
    
    hold_a_value = *a;
    
    *a = *b;
    
    *b = hold_a_value;
    
}
