
#include <stdio.h>

int search_element(int tab[], int len, int element)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (tab[i] == element)
			return (i);
		i++;
	}
	return (-1);
}

int main()
{
	int tab[6] = {1, 2, 3, 4, 5, 6};
	int len = 6;
	int element = 5;
	int found;

	found = search_element(tab, len, element);
	if (found == -1)
		printf ("element not found\n");
	else
		printf ("index: %d\n", found);	
}