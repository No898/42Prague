/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:29:42 by todinh            #+#    #+#             */
/*   Updated: 2023/09/11 13:50:03 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>
void ft_sort_int_tab(int *tab, int size);
int main()
{
	int tab[] = {1, 6, 8, 9, 2, 3};
	int size = sizeof(tab) / sizeof(tab[0]);

	printf("Before sort: \n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	ft_sort_int_tab(tab, size);

	printf("After sort in asc:\n");
	for(int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
	return 0;
}
*/