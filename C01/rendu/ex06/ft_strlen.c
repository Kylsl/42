int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;
	ft_strlen(argv[1]);
	return (0);
}*/
