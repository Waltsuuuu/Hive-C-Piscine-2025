#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char str1[50] = "Hello ";
	char str2[] = "World";

	ft_strcat(str1, str2);
	printf("%s\n", str1);
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	i = 0;
	while (dest[i] != '\0') //Find the end of string we want to concat to.
		i++;
	j = 0;
	while (src[j] != '\0') //Loop to the end of the string we want to add.
	{
		dest[i] = src[j]; //Assign the character in dest position i to src position j. First loop replaces dest '\0', to the first char of src string.
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}