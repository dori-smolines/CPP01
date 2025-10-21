#include "Weapon.hpp"

////////////// CONSTRUCTOR //////////////////

Weapon::Weapon(void)
{
	std::cout << BLUE << "Weapon: constructor is called"<< RESET << std::endl;
	return;
}

Weapon::Weapon(std::string type)
{
	std::cout << BLUE << "Weapon: constructor is called (" << type << ")"<< RESET << std::endl;
	this->_type = type;
	return;
}

Weapon::~Weapon(void)
{
	std::cout << YELLOW << "weapon : destructor is called"<< RESET << std::endl;
	return;
}

////////////// GETTERS and SETTERS //////////////////

const std::string Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
	return;
}








