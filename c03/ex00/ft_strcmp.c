/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:41:54 by todinh            #+#    #+#             */
/*   Updated: 2023/09/19 15:37:23 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
#include <stdio.h>
int main(void)
{
    char str1[] = "Buttear";
    char str2[] = "Butteaar";

    int result = ft_strcmp(str1,str2);

    if (result == 0){
        printf("strings are same\n");
    }else if (result < 0) {
        printf("%s is shorter than %s\n", str1, str2);
    }else {
        printf("%s is larger than %s\n",str1, str2);
    }
}
*/