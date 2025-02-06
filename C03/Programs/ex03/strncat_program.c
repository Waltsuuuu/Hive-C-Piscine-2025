#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char str1[10] = "Hello ";
	char str2[] = "World";

	ft_strncat(str1, str2, 4);
	printf("%s \n", str1);
	return 0;
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0') //Find end of dest.
		i++;
	j = 0;
	while (j < nb && src[j] != '\0') //Loop until end n amount of characters is reached AND we have not reached the end of src.
	{
		dest[i] = src[j];
		i++;
		j++;	
	}
	dest[i] = '\0'; //Set the last char of dest to null terminator to mark the end of string.
	return (dest);
}

