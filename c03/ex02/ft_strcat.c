/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:20:55 by todinh            #+#    #+#             */
/*   Updated: 2023/09/14 11:29:56 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main(void){
	char dest[50] = "Butter is better then, ";
	char src[] = "oil!";

	printf("Before: %s\n", dest);

	ft_strcat(dest,src);

	printf("after %s", dest);
}
*/