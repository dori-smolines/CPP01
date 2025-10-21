#include "Harl.hpp"


int main (int argc, char **argv)
{
	if (argc < 2)
		return (std::cerr << "Error : too few arguments" << std::endl, 1);
	if (argc > 2)
		return (std::cerr << "Error : too many arguments" << std::endl, 1);

	Harl harl;
	harl.complain(argv[1]);
	return 0;
}




