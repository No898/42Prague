/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:25:23 by todinh            #+#    #+#             */
/*   Updated: 2023/09/19 16:54:26 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

/*
#include <stdio.h>
void	ft_if_print(int *arr, int size)
{
	int	i;

	if (arr == NULL)
	{
		printf("Range error - min is greater than or equal to max.\n");
		return ;
	}

	printf("Result: \n");
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	free(arr);
}

int	main(void)
{
	int	min;
	int	max;
	int	*arr;

	printf("Set min included: ");
	scanf("%d", &min);
	printf("Set max excluded: ");
	scanf("%d", &max);

	arr = ft_range(min, max);
	ft_if_print(arr, max - min);

	return (0);
}
*/