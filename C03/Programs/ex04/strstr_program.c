#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "";
	char *find_me = "";

	printf("%s \n", strstr(str, find_me));
	printf("%s \n", ft_strstr(str, find_me));
	return (0);
}


char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while(str[i] != '\0') //Loop through entire source string.
	{
		while (str[i + j] == to_find[j]) //Begin loop if matching char is found, Keep looping while chars match.
		{
			if (to_find[j + 1] == '\0') //If the next char is the end of to_find, meaning the entire string was found.
			{
				return(&str[i]); //return the index where the first character was found in source string.
			}
			j++;
		}
		i++;
		j = 0; //Reset to_find incrementor to 0, so we can start comparing from the first character again.
	}
	return ((void*)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               0); //Return null
}
