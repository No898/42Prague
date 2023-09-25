/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:27:05 by todinh            #+#    #+#             */
/*   Updated: 2023/09/19 16:52:37 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

/*
#include <stdio.h>
void	ft_if_print(int *arr, int size)
{
	int	i;
	if (arr == NULL)
	{
		printf("Range error - min is greater than or equal to max.\n");
	}
	else if (size == -1)
	{
		printf("Memory allocation error.\n");
	}
	else
	{
		i = 0;
		printf("Result: \n");
		while (i < size)
		{
			printf("%d ", arr[i]);
			i++;
		}
		printf("\n");
	}
	if (arr != NULL)
		free(arr);
}

int	main(void)
{
	int	*arr;
	int	min;
	int	max;
	int	size;

	printf("Set min included: ");
	scanf("%d", &min);
	printf("Set max excluded: ");
	scanf("%d", &max);
	size = ft_ultimate_range(&arr, min, max);
	ft_if_print(arr, size);
	return (0);
}
*/