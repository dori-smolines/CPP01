#include "HumanB.hpp"

////////////// CONSTRUCTOR //////////////////

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << BLUE << "HumanB: constructor is called (" << name << ")"<< RESET << std::endl;
	return;
}

HumanB::HumanB(void)
{
	std::cout << BLUE << "HumanB constructor is called"<< RESET << std::endl;
	_weapon = NULL;
	return;
}

HumanB::~HumanB(void)
{
	std::cout << YELLOW << "HumanB destructor is called"<< RESET << std::endl;
	return;
}

////////////// METHODS //////////////////

void HumanB::attack(void)
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon " << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}







