#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char str1[] = "hell034";
	char str2[] = "hel4";

	printf("%d \n", ft_strncmp(str1, str2, 4));
	return 0;
}


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	
	i = 0;
	if (n == 0)         //Nothing to compare, return 0.
		return (0);
	while (s1[i] == s2[i])  //Loop until characters dont match.
	{
		if (i + 1 == n || s1[i] == '\0') //If n characters is reached OR end of string is reached, return 0.
			return (0);
		i++;
	}
	return (s1[i] - s2[i]); //If characters didnt match, caluclate and return difference (ascii dec).
}
