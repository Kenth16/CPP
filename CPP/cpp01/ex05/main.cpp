#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	main;

	if (ac == 2)
	{
		std::string level = av[1];
		main.complain(level);
	}
	else
		std::cout << "Error please enter 1 arg with exe" << std::endl;
	return 0;
}