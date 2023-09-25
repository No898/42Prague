/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:00:21 by todinh            #+#    #+#             */
/*   Updated: 2023/09/19 21:25:00 by todinh           ###   ########.fr       */
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

int	ft_total_length(int size, char **strs)
{
	int	i;
	int	total_length;

	i = 0;
	total_length = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;
	int		position;

	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	result = malloc(ft_total_length(size, strs) + ft_strlen(sep) + 1);
	position = 0;
	i = 0;
	while (i < size)
	{
		ft_strcpy(result + position, strs[i]);
		position += ft_strlen(strs[i]);
		if (i + 1 < size)
		{
			ft_strcpy(result + position, sep);
			position += ft_strlen(sep);
		}
		i++;
	}
	return (result);
}

/*
#include <stdio.h>
int main() {
	char *strs[] = {"New", "aha", "Bit"};
	char *sep = ", ";
	char *result = ft_strjoin(3, strs, sep);
	printf("%s\n", result);

	free(result);
	return (0);
}
*/