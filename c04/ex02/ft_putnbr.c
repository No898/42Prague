/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:50:07 by todinh            #+#    #+#             */
/*   Updated: 2023/09/13 11:31:23 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char		digit;
	long int	nblong;

	nblong = nb;
	if (nblong < 0)
	{
		write(1, "-", 1);
		nblong = -nblong;
	}
	if (nblong >= 10)
	{
		ft_putnbr(nblong / 10);
	}
	digit = nblong % 10 + '0';
	write(1, &digit, 1);
}

/*
int main(void)
{
	//long = 32bitu long long = 64 bitu
	int number = 21748364822;
	ft_putnbr(number);
}
*/