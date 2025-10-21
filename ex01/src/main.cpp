#include "Zombie.hpp"


int main (int argc, char** argv)
{
	Zombie *zombie_point;
	int N;
	
	if (argc != 3)
	{
		std::cout << "bad number of arguments"<< std::endl;
		return (1);
	}
	
	N = atoi(argv[1]); 
	if (N < 0)
	{
		std::cout << "negative number is forbiddden"<< std::endl;
		return (1);
	}
		
	zombie_point = zombieHorde(N, argv[2]);

for (int i = 0; i < N; i++)
{
	zombie_point[i].announce();
}
	
	delete[] zombie_point;
	return 0;
}

