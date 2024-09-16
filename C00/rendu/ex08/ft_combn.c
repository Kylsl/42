/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:25:30 by ambre             #+#    #+#             */
/*   Updated: 2024/09/15 18:35:27 by ambre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_gener_comb( int *tab, int n, int index, int start)
{
	int	i;

	if (index == n)
	{
		print_comb(tab, n);
		return ;
	}
	i = start;
	while (i < 10)
	{
		tab[index] = i;
		ft_gener_comb(tab, n, (index + 1), (i + 1));
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n <= 0 || n >= 10)
	{
		return ;
	}
	ft_gener_comb(tab, n, 0, 0);
}

int	main(void)
{
	ft_print_combn(4);
	return (0);
}
