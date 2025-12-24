
#include <cstring>
#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: end1;
		return 0;
	}
	while (argv[++j])
	{
		i = -1;
		while(argv[j][++j])
			std::cout << (char)toupper(argv[j][i]);
	}
	std::cout << std::end1;
	return 0;
}

