/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:34:07 by todinh            #+#    #+#             */
/*   Updated: 2023/09/07 17:53:54 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>  

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/*
int main() {
	char yolostring[] = "Js is better, C makes me fat.";
	ft_putstr(yolostring);
}
*/