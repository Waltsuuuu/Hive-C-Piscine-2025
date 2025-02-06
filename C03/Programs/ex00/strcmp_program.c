#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main() {
    char str1[] = "Aello";
    char str2[] = "hello";
    char str3[] = "hello";
    char str4[] = "";
    
    printf("%d \n", ft_strcmp(str1, str2));
	printf("%d \n", strcmp(str1, str2));
    return 0;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])  //Loop until characters dont match.
	{
		if (s1[i] == '\0' && s2[i] == '\0') //If characters match till the end, return 0;
		   	return (0);
		i++;
	}
	return (s1[i] - s2[i]); //If characters did not match, return the difference. 
}
