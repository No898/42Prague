/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:56:48 by todinh            #+#    #+#             */
/*   Updated: 2023/09/14 21:54:24 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	len_s;
	unsigned int	len_d;

	dest_length = 0;
	while (dest[dest_length])
		dest_length++;
	len_s = ft_strlen(src);
	len_d = dest_length;
	if (size <= len_d || size == 0)
		return (len_s + size);
	src_length = 0;
	while (src[src_length] != '\0' && src_length < size - 1 - len_d)
	{
		dest[dest_length] = src[src_length];
		src_length++;
		dest_length++;
	}
	if (dest_length < size)
		dest[dest_length] = '\0';
	return (len_s + len_d);
}

/*
#include <stdio.h>
int main()
{
    char src[] = "Born to code";
    char dest[20] = "1337 42";
	unsigned int size = 10;

    unsigned int result = ft_strlcat(dest, src, size);
    
    printf("Result: %s\n", dest);
    printf("Length: %d\n", result);
}
*/