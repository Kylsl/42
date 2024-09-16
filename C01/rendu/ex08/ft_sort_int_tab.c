void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	while (tab[i] < size - 1)
	{
		j = i + 1;
		while (tab[j] < size - 1)
		{
			if (i > j)
			{
				t = tab[j];
				tab[j] = tab[i];
				tab[i] = t;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	size;

	size = 5;
	tab[0]={4,2,6,1,5,8,0,3,0};
	ft_sort_int_tab(tab, size);
	printf("%d\n", *tab);
	return (0);
}
