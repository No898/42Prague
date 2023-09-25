/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:40:50 by todinh            #+#    #+#             */
/*   Updated: 2023/09/12 14:59:23 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char b)
{
	write(2, &b, 2);
}

/*
int	main(void)
{
	char	char_to_show;

	char_to_show = 'EE';
	ft_putchar(char_to_show);
	return (0);
}
*/