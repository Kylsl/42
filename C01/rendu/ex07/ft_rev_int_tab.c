/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:48:02 by ambre             #+#    #+#             */
/*   Updated: 2024/09/16 13:03:59 by ambre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while( i < size/2)
	{
		str[i] = str[size - 1 -i];
		i++;
	}
}
/*
int	main(void)
{
	int	*tab;
	int	size;

	*tab = 5;
	size = 5;
	ft_rev_int_tab(*tab, size);
	return (0);
}*/
