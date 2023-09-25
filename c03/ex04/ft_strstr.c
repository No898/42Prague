/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:29:30 by todinh            #+#    #+#             */
/*   Updated: 2023/09/12 14:25:48 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp_str;
	char	*temp_find;

	if (*str == '\0' && *to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		temp_str = str;
		temp_find = to_find;
		while (*temp_str == *temp_find && *temp_find != '\0')
		{
			temp_str++;
			temp_find++;
		}
		if (*temp_find == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}

/*
#include <stdio.h>
int main() {
    char str1[] = "Vietnam, Czechia, Slovakia, USA, Spain";
    char str2[] = "nam";
    
    char *result = ft_strstr(str1, str2);
    
    if (result != NULL) {
        printf("Index is at %ld position.\n", result - str1);
    } else {
        printf("Substring not found\n");
    }
    
    return 0;
}
*/