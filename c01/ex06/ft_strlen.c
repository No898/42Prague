/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:54:35 by todinh            #+#    #+#             */
/*   Updated: 2023/09/07 20:11:25 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

/*
int main(void)
{
	char *supermegaimportanttext;
	supermegaimportanttext = "C sux.";

	int howmanychars;

	howmanychars = ft_strlen(supermegaimportanttext);

	printf("%d",howmanychars);
}
*/