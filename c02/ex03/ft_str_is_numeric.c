/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:23:49 by todinh            #+#    #+#             */
/*   Updated: 2023/09/11 13:31:46 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	char str1[] = "1234567890";
    char str2[] = "abc123450";
    char str3[] = "";

    printf("%s: %d\n", str1, ft_str_is_numeric(str1)); 
    printf("%s: %d\n", str2, ft_str_is_numeric(str2)); 
    printf("%s: %d\n", str3, ft_str_is_numeric(str3));

}
*/