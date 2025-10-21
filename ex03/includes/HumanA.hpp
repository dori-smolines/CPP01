#ifndef HumanA_HPP
# define HumanA_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {

private :
    std::string _name;
	Weapon &_weapon;

public :

	~HumanA(void);
	HumanA(std::string name, Weapon &weapon);

	void attack(void);
};



#endif






