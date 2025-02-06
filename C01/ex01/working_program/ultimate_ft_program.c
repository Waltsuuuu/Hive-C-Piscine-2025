#include <stdio.h>

void    ft_ultimate_ft(int *********nbr);

int main()
{

    int a = 6;
    
    int *ptr0 = &a;
    
    int **ptr1 = &ptr0;
    
    int ***ptr2 = &ptr1;
    
    int ****ptr3 = &ptr2;
    
    int *****ptr4 = &ptr3;
    
    int ******ptr5 = &ptr4;
    
    int *******ptr6 = &ptr5;
    
    int ********ptr7 = &ptr6;
    
    int *********ptr8 = &ptr7;
    
    ft_ultimate_ft(ptr8);
    
    printf("%d", *********ptr8);
}

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}
