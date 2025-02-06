#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
    int x = 11;
    
    int y = 2;
    
    int z; /*This will hold int *div value */
    
    int zz; /*this will hold int *mod value*/
    
    ft_div_mod(x, y, &z, &zz);
    return 0;
}

void  ft_div_mod(int a, int b, int *div, int *mod)
{
    int result_of_a_b;
    
    result_of_a_b = a / b;
    
    printf("Result of a / b = %d \n", result_of_a_b);
    
    *div = result_of_a_b;
    
    printf("Result of a / b, stored in *div = %d \n", *div);
    
    int remainder = a % b;
    
    *mod = remainder;
    
    printf("Remainder of a / b = %d \n", *mod);

    
    
}
