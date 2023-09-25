/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:32:01 by todinh            #+#    #+#             */
/*   Updated: 2023/09/11 17:34:29 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
    char str1[] = "hello";
    char str2[] = "Butter";
    char str3[] = "";

    printf("%d\n", ft_str_is_lowercase(str1));
    printf("%d\n", ft_str_is_lowercase(str2));
    printf("%d\n", ft_str_is_lowercase(str2));
}
*/