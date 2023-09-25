/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:56:21 by todinh            #+#    #+#             */
/*   Updated: 2023/09/11 20:19:05 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*
#include <stdio.h>
int main() {
    char str1[] = "Butt";
    char str2[] = "Butteaaaaar";
    int result = ft_strncmp(str1, str2, 20); 
    
    if (result < 0) {
        printf("%s is less than %s\n", str1,str2);
    } else if (result > 0) {
        printf("%s is greater than %s\n", str1,str2);
    } else {
        printf("%s is equal to %s\n", str1,str2);
    }
    
    
}
*/