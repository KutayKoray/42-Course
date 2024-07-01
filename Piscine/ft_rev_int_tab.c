void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;	
	
	j = size - 1;
	i = 0;
	while (i < (size / 2))
	{
		int tmp;

		tmp = tab[i];
		tab[i] = tab[j - i];
		tab[j - i] = tmp;
		i++;
	}
}
