/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:55:56 by todinh            #+#    #+#             */
/*   Updated: 2023/09/26 14:08:55 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	lenght;

	index = 0;
	lenght = 0;
	while (src[lenght])
	{
		lenght++;
	}
	if (size <= 0 || dest == NULL)
	{
		return (lenght);
	}
	while (src[index] && index < size - 1)
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (lenght);
}

/*
#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main() {
    char src[] = "Turtle soup isnt soup.";
    char dest[15];

    unsigned int result = ft_strlcpy(dest, src, 15);
    
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Length of the copied string: %u\n", result);
    
    return 0;
}
*/
