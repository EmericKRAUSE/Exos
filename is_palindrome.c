#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_palindrome(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(str) - 1;

	while (i < j)
	{
		if (str[i++] != str[j--])
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	result;

	if (argc == 2)
	{
		result = is_palindrome(argv[1]);
		if (result == 0)
			printf ("%s is not a palindrome\n", argv[1]);
		else if (result == 1)
			printf ("%s is a palindrome\n", argv[1]);
	}
	else
		write (1, "\n", 1);
}