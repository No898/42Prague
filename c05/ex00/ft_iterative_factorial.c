/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:15:28 by todinh            #+#    #+#             */
/*   Updated: 2023/09/18 20:18:10 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	else
	{
		result = 1;
		while (nb > 1)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
}

/*
#include <stdio.h>
int main(void){
	int result;
	result = ft_iterative_factorial(5);
	printf("Result is: %d\n",result);
}
*/