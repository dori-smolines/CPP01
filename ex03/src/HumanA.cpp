#include "HumanA.hpp"

////////////// CONSTRUCTOR //////////////////

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) 
{
    std::cout << "HumanA: constructor is called (" << name << ")" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << YELLOW << "HumanA destructor is called"<< RESET << std::endl;
	return;
}

////////////// METHODS //////////////////

void HumanA::attack(void)
{
std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}








