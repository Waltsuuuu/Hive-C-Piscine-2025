/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-26 08:30:13 by wheino            #+#    #+#             */
/*   Updated: 2025-01-26 08:30:13 by wheino           ###   ########.fi       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;			//Iterates characters.
	int neg_count;	//Counts # of '-' characters.
	int result;		//Holds our result.

	i = 0;
	neg_count = 0;
	result = 0;
	
	//Check for any type of whitespace
	while (str[i] == ' '|| str[i] == '\n' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	
	//Loop through the '-' and '+' preceeding the number
	//Count the num or '-' signs and store them in neg_count.
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg_count++;
		}
		i++;
	}

	//Loop through string, only accepting digits.
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		//(str[i] - '0') converts the char digit to its int counterpart. ex.
		//('8' - '0') == (56 - 48) == (8)) 
		//(10 * result) shifts the decimal spot one place to the left, making place for the next digit.
		// 
		result = 10 * result + (str[i] - '0');
		i++;
	}

	//If the number of '-' is ood, turn the result negative, else -> positive.
	if (neg_count % 2 != 0)
		return (result * -1);
	else
	{
		return (result);
	}	
}

int	main()
{
	char str[] = " 		 \n----+---+123";
	printf("%d \n", ft_atoi(str));
	return 0;
}