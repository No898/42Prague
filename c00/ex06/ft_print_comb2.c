/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:04:59 by todinh            #+#    #+#             */
/*   Updated: 2023/09/20 16:43:27 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int i)
{
	int	first;
	int	second;

	if (i < 10)
	{
		print_char('0');
		print_char(i + '0');
	}
	else
	{
		first = i / 10;
		second = i % 10;
		print_char(first + '0');
		print_char(second + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			int_to_char(i);
			print_char(' ');
			int_to_char(j);
			if (i < 98)
			{
				print_char(',');
				print_char(' ');
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/