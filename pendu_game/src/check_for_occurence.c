#include "../pendu.h"

void	check_for_occurence(char *tab, char *str, char to_find, int len)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] == to_find)
			tab[i] = to_find;
		i++;
	}
	display_word (tab, len);
}