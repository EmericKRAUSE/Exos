#include "../pendu.h"

void	display_word(char *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf ("%c", tab[i]);
		i++;
	}
	printf ("\n");
}