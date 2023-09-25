/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:03:48 by todinh            #+#    #+#             */
/*   Updated: 2023/09/19 12:36:45 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*duplicate;

	length = ft_strlen(src);
	duplicate = malloc(length + 1);
	if (duplicate == 0)
	{
		return (0);
	}
	ft_strcpy(duplicate, src);
	return (duplicate);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[50];
	char	*duplicate;

	printf("Try some text: ");
	scanf("%s", s	rc);
	duplicate = ft_strdup(src);
	if (duplicate != 0)
	{
		printf("Duplicated text: %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Something is wrong.");
	}
}
*/