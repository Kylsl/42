void	ft_swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
/*
int	main(void)
{
	int *a;
	int *b; 

	*a = 1;
	*b = 2;
	ft_swap(&a, &b);
	return (0);
}*/
