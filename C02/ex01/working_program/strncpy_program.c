#include <unistd.h>
#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    int n;
    n = 5;
    
    char str1[] = "Superduper";
    char str2[8];
    
    ft_strncpy(str2, str1, n);
    printf("%s", str2);
    return 0;
}

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    i = 0;
    
    
    while ((i < n) && (src[i] != '\0'))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
