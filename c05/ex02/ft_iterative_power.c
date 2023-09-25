/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:03:22 by todinh            #+#    #+#             */
/*   Updated: 2023/09/18 14:25:15 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>
int main(void)
{	
	// mocnina
	int result;
	result = ft_iterative_power(2,3);
	printf("Result: %d\n", result);
}
*/