#include "Zombie.hpp"


////////////// CONSTRUCTOR //////////////////

Zombie::Zombie(std::string name)
{
	this->_name = name;
	return;
}

Zombie::Zombie(void)
{
	std::cout << BLUE << "Zombie constructor is called" << RESET << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << YELLOW << _name << " destructor is called" << RESET << std::endl;
	return;
}

////////////// METHODS //////////////////

void Zombie::announce(void)
{
std::cout << _name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}









