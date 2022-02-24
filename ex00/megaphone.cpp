#include <iostream>

void	megaphone(char *argv)
{
	int i = 0;

	while (argv[i])
	{
		if (argv[i] >= 'a' && argv[i] <= 'z')
			argv[i] = argv[i] - 32;
		i++;
	}
	std::cout << argv;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		for (int i = 1; i < argc; i++)
			megaphone(argv[i]);
	}
	std::cout << std::endl;
	return (0);
}
