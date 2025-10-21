#include "Harl.hpp"


////////////// CONSTRUCTOR //////////////////

Harl::Harl(void)
{
	std::cout << YELLOW << "Harl constructor is called" << RESET << std::endl;
	return;
}

Harl::~Harl(void)
{
	std::cout << YELLOW << "Harl destructor is called" << RESET << std::endl;
	return;
}

////////////// METHODS //////////////////

void Harl::debug(void)
{
	std::cout << BLUE << "[ DEBUG ]" << RESET << std::endl
				<< "I love having extra bacon for my 7XL-double-cheese-triple"
				<<"-pickle-special-ketchup burger. I really do!"
				<< std::endl;
	return;
}

void Harl::info(void)
{
	std::cout << GREEN << "[ INFO ]" << RESET << std::endl
			<< "I cannot believe adding extra bacon costs more money."
			<< std::endl
			<< "You didn't put enough bacon in my burger!"
			<< std::endl
			<< " If you did, I wouldn't be asking for more!"
			<< std::endl;
	return;
}

void Harl::warning(void)
{
	std::cout << RED << "[ WARNING ]" << RESET << std::endl
			<< "I think I deserve to have some extra bacon for free."
			<< std::endl
			<< " I've been coming for years, whereas you started "
			<< "working here just last month."
			<< std::endl;
	return;
}

void Harl::error(void)
{
	std::cout << PURPLE << "[ ERROR ]" << RESET << std::endl
			<< "This is unacceptable! I want to speak to the manager now."
			<< std::endl;
	return;
}

void Harl::other(void)
{
	std::cout << PINK << "[ MISCELLANEOUS ]" << RESET << std::endl
			<< "[ Probably complaining about insignificant problems ]"
			<< std::endl;
	return;
}

//creation d'un tableau de pointeur sur fonction

void Harl::complain(std::string level)
{
	std::string tab[5] = {"DEBUG", "INFO", "WARNING", "ERROR", level}; 
	void (Harl::*tabHarlFunctions[5]) (void) = 
			{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::other};

	for (int i = 0; i < 5; i++)
	{
		if (level == tab[i])
		{
			(this->*tabHarlFunctions[i])();
			return; 
		}
	}
}
