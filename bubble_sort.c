#include <stdio.h>

void	bubble_sort(int *tab, int len)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		j++;
		}
		i++;
	}
	i = 0;
	while (i < len)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int main ()
{
	int tab1[5] = {1, 2, 3, 4, 5};
	int tab2[5] = {5, 4, 3, 2, 1};
	int tab3[5] = {2, 2, 2, 2, 2};
	int tab4[5] = {54, 897, 90, 75, 45};
	int tab5[5] = {-4, -6, -7, -3, -5};
	int tab6[1] = {0};
	bubble_sort(tab1, 5);
	bubble_sort(tab2, 5);
	bubble_sort(tab3, 5);
	bubble_sort(tab4, 5);
	bubble_sort(tab5, 5);
	bubble_sort(tab6, 1);
}