#ifndef Harl_HPP
# define Harl_HPP
#include <string>
#include <iostream>


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

class Harl {

private :
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void other(void);
	
public :
    Harl(void);
	~Harl(void);
	void complain(std::string level);
};

#endif






