#include <stdio.h>
#include <unistd.h>

void    ft_putstr(char *str);

int main() {
    char *my_string = "Hello";
    ft_putstr(my_string);
    return 0;
}

void    ft_putstr(char *str)
{
    int str_length;
    
    str_length = 0;
    
    while (str[str_length] != '\0')
        str_length++;
        
    write(1, str, str_length);
}
