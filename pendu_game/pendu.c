#include "pendu.h"

int main()
{
	char	*str;
	int		len;
	char	*tab;
	char	to_find;
	char 	temp[2];

	str = "Hello";
	len = ft_strlen(str);
	tab = create_tab(len);
	display_word(tab, len);

	while (1)
	{
		printf ("letter to find :");
		scanf ("%1s", temp);
		to_find = temp[0];

		check_for_occurence(tab, str, to_find, len);
		if (is_finished(tab) == 1)
		{
			printf ("You win !!\n");
			return (0);
		}
	}

	free (tab);
}