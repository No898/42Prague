/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:40:02 by todinh            #+#    #+#             */
/*   Updated: 2023/09/21 14:50:36 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

void	ft_print(int nb, int *tab, int pos)
{
	int	i;

	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < nb)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_print_combn_increment(int nb, int *tab)
{
	int	i;
	int	max;

	i = nb - 1;
	max = 9;
	while (tab[i] == max)
	{
		i--;
		max--;
	}
	tab[i]++;
	while (i < nb - 1)
	{
		tab[i + 1] = tab[i] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	ft_print(n, tab, 0);
	while (tab[0] != 10 - n || tab[n - 1] != 9)
	{
		if (tab[n - 1] != 9)
		{
			tab[n - 1] += 1;
		}
		else
		{
			ft_print_combn_increment(n, tab);
		}
		ft_print(n, tab, 1);
	}
}

/*
#include <stdio.h>
int	main()
{
	int	number;
	int	tabs;
	int	result;

	printf("Select number between 0 - 10: ");
	scanf("%d", &number);
	if (0 < number && number < 10)
	{
		ft_print_combn(number);
	}
	else
	{
		printf("Something went wrong, did you try number between 0 - 10?\n");
	}
	return (0);
}
*/