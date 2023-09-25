/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:15:59 by todinh            #+#    #+#             */
/*   Updated: 2023/09/11 17:34:22 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
 char str[] = "C sux!";
    int result = ft_str_is_printable(str);
    
    if (result == 1) {
        printf("Its printable.\n");
    } else {
        printf("It is not printable.\n");
    }
}
*/