/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:25:37 by todinh            #+#    #+#             */
/*   Updated: 2023/09/11 11:26:55 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*temp;

	temp = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (temp);
}

/*
#include <stdio.h>
int main(void) {
    char src[] = "I like turtles again!";
    char dest[25];

    ft_strncpy(dest, src, sizeof(dest) - 1);

    printf("Copied text: %s\n", dest);

    return 0;
}
*/