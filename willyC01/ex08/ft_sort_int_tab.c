#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int j;
	int i = 0;
	int y = --size;

	while (i < y)
	{
		j = 0;
		while (j < y - i)
		{
			if (tab[j] > tab[j + 1])
			{
				int tmp = tab[j];

				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	int array[] = {20, 57, 3, 15, 88};
	int i = 0;
	while (i < 5)
		printf("%d, ", array[i++]);
	i = 0;
	while (i < 5)
		printf("%d, ", array[i++]); 
	ft_sort_int_tab(array, 5);
	printf("\n");
	i = 0;
	while (i < 5)
		printf("%d, ", array[i++]);
}
