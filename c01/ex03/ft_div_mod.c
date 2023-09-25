/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:35:04 by todinh            #+#    #+#             */
/*   Updated: 2023/09/11 13:49:32 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int	main(void)
{
	int firstnumber;
	int secondnumber;
	int div;
	int mod;

	firstnumber = 10;
	secondnumber = 3;
	div = 0;
	mod = 0;

	ft_div_mod(firstnumber,secondnumber, &div, &mod);
	printf("%d / %d = %d and remain %d",firstnumber, secondnumber,div,mod);

}
*/