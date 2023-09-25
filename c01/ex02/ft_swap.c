/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:13:04 by todinh            #+#    #+#             */
/*   Updated: 2023/09/11 13:49:30 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main(void)
{
    int a = 20;
    int b = 42;
    
    ft_swap(&a, &b);
    
    printf("a: %d, b: %d\n", a, b);
    
    return 0;
}
*/