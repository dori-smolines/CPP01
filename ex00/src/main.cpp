#include "Zombie.hpp"

int main (void)
{
	Zombie *zombie_point;

	randomChump("draco");
	zombie_point = newZombie("Crachin");
	zombie_point->announce();
	delete zombie_point;
	return 0;
}
