/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:30:17 by todinh            #+#    #+#             */
/*   Updated: 2023/09/20 16:58:47 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb <= 3)
	{
		return (1);
	}
	if (nb % 2 == 0 || nb % 3 == 0)
	{
		return (0);
	}
	i = 5;
	while (i <= nb / i)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
		{
			return (0);
		}
		i = i + 6;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
    int number;
    printf("Just try any number: ");
    scanf("%d", &number);

    if (ft_is_prime(number))
    {
        printf("%d is Prime.\n", number);
    }
    else
    {
        printf("%d is not Prime.\n", number);
    }
  
    return 0;
}
*/