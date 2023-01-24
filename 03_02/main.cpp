#include "Enemy.h"


bool Enemy::isAlive_ = true;

int main()
{
	std::array<Enemy, 5> enemy{};
	// “Gó‘Ô‚ğ•\¦
	for (int i = 0; i < enemy.size(); i++)
	{
		printf("\n“G%d:", i);

		enemy[i].Print();
	}
	
	enemy[4].SetAlive(false);

	printf("\n“G4‚ğ“|‚µ‚Ü‚µ‚½\n");

	// “Gó‘Ô‚ğÄ•\¦
	for (int i = 0; i < enemy.size(); i++)
	{
		printf("\n“G%d:", i);

		enemy[i].Print();
	}

	return 0;
}