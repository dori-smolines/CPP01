#ifndef Zombie_HPP
# define Zombie_HPP
#include <string>
#include <iostream>
#include <cstdlib> 

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

class Zombie {

private :
    std::string _name;
	
public :
    Zombie(void);
    Zombie(std::string name);
	~Zombie(void);
	void setName(std::string name);
	void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif






