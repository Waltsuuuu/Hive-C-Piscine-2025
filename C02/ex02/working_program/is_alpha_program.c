// USE ONLINE COMPILER OR USE VOID FOR FUNCTION RETURN VALUE!!!!!
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
    char str1[] = "hello2222";
    char str2[] = "hello";
    char str3[] =  "";
    
    ft_str_is_alpha(str1);
    return 0;
}

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    
    if (str[i] == '\0')
    {
        printf("empty");
        return 1;
    }
    
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
        i++;
        } else {
            printf("ran into not alpha char \n");
            return 0;
        }
    } 
    printf("all alpha");
	return 1;
}
