#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	while (a < '9' || b <= '8')
	{
		if (b < '9')
		{
			d = b + 1;
			c = a;
		}
		else
		{
			c = a + 1;
			d = '0';
		}
		while (c <= '9' && d <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			if (a != '9' || b != '8')
				write(1, ", ", 2);
			if (d < '9')
				d++;
			else
			{
				c++;
				d = '0';
			}
		}
		if (b < '9')
			b++;
		else
		{
			a++;
			b = '0';
		}
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}
