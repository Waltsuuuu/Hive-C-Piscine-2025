#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
    char str1[] = "Hello";
    char str2[6];
    
    ft_strcpy(str2, str1);
    
    printf("Copied string = :%s: \n", str2);
    
}

char    *ft_strcpy(char *dest, char *src)
{
    int i;
	char *base;

	base = dest;
    
    i = 0;
    
    while(src[i] != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    
    *dest = '\0'; 
    
    printf("If we tried to print dest :%s: \n", dest);
    
    return base;
}
