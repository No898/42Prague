/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:20:00 by todinh            #+#    #+#             */
/*   Updated: 2023/09/25 14:31:34 by todinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + 48);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (par[++i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
	}
}

/*
#include "ft_strs_to_tab.c"
int main(int argc, char **argv)
{
    struct s_stock_str *result = ft_strs_to_tab(argc - 1, argv + 1);

    if (result == NULL)
    {
        ft_putstr("Memory allocation failed.\n");
        return 1;
    }

    ft_show_tab(result);

    // Free allocated memory
    int i = 0;
    while (result[i].str != 0)
    {
        free(result[i].copy);
        i++;
    }
    free(result);

    return 0;
}
*/