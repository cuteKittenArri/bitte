void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	while(i < size)
	{
		tab[i] = tab[size];
		i++;
		size--;
	}
}


