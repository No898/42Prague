/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:55:56 by todinh            #+#    #+#             */
/*   Updated: 2023/09/25 15:10:22 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[c])
		c++;
	if (size < 1)
		return (c);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (c);
}

/*
#include <stdio.h>
int main(void)
{
	char src[] = "Turtle soup is healthy!";
	char dest [100];

	unsigned int butter = ft_strlcpy(dest, src, sizeof(dest));
	printf("Lengh: %u \nand\nText: %s\n", butter, dest);
}
*/ 