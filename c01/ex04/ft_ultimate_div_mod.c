/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:13:01 by todinh            #+#    #+#             */
/*   Updated: 2023/09/11 19:12:00 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b != 0)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}

/*
int main(void)
{
	int a;
	int b;

	a = 10;
	b = 3;

	ft_ultimate_div_mod(&a,&b);
	printf("The result is %d and the reminder is %d", a, b);
}
*/