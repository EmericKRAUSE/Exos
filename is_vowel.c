#include <stdio.h>

int	ft_strchr(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	is_vowel(char *str)
{
	char	*vowel;
	int		i;
	int		count;

	vowel = "aeiouyAEIOUY";
	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_strchr(str[i], vowel) == 1)
			count++;
		i++;
	}
	return (count);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", is_vowel(argv[1]));
	}
}