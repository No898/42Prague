/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:48:48 by todinh            #+#    #+#             */
/*   Updated: 2023/09/19 19:48:37 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	s;

	s = 1;
	if (nb == 0)
	{
		return (0);
	}
	while (nb > s * s && (s <= 46340 || nb / 2 > s))
	{
		s++;
	}
	if (nb == s * s)
	{
		return (s);
	}
	return (0);
}

//#include <stdio.h>
/*
int main()
{
    int number;
    printf("Just try some number: ");
	scanf("%d", &number);
    int sqrt = ft_sqrt(number);
    if (sqrt > 0)
    {
    printf("Square root of %d is %d\n", number, sqrt);
    } 
    else 
    {
    printf("The number %d doesn't have a valid square root  %d\n", number,sqrt);
    }
    return 0;
	i*i <= nb && i <= 46340, kdyz ta kokotina neprojde pouzij tohle
}
*/