#ifndef HumanB_HPP
# define HumanB_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp"


#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"
#define BOLD	"\033[1m"
#define PINK	"\033[95m"
#define LPINK	"\033[38;5;218m"
#define PURPLE	"\033[35m"
#define LPURPLE "\033[38;5;141m"
#define RED		"\033[31m"

class HumanB {

private :
    std::string _name;
	Weapon *_weapon;

public :
    HumanB(void);
    HumanB(std::string name);
	~HumanB(void);

	void attack(void);
	void setWeapon(Weapon &weapon);
};



#endif






