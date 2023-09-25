/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:15:36 by todinh            #+#    #+#             */
/*   Updated: 2023/09/08 12:55:38 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*
int main() {
	int arr[] = {0, 1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	
	for (int i = 0; i < size; i++) {
	printf("%d", arr[i]);
    }
    ft_rev_int_tab(arr, size);
	printf(" | ");
    for (int i = 0; i < size; i++) {
    printf("%d", arr[i]);
    }
}
*/