/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:41:39 by todinh            #+#    #+#             */
/*   Updated: 2023/09/25 14:59:18 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	int				c;
	int				word;

	i = 0;
	word = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (word == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (word == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') && (c > 'Z' && c < 'a') || c > 'z')
			word = 1;
		else
			word = 0;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	//if its lowercase, make it upper
	// while 1. if is not letter or number and its lowercare, make it upper case
	//while 2. if is uppercase, make it lowercase
	char str[] = "Turtles are green.";
	printf("%s\n", ft_strcapitalize(str));
}
*/