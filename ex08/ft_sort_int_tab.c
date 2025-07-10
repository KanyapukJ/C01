void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i + 1 < size)
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			if (i != 0)
				i--;
		}
		else
			i++;
	}
}