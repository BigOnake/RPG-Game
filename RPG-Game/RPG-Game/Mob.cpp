#include "Mob.h"

enum MobTypes { GOBLIN, STRONG_GOBLIN, WOLF, PEASANT, SLIME };

Mob::Mob(int mobType)
{
	setMobType(mobType);
}

void Mob::setMobType(int lMobType)
{
	MobTypes mobTypes = static_cast<MobTypes>(lMobType);

	switch (mobTypes)
	{
	case GOBLIN:
		mobType = "Goblin";
		setHealthPoint(50);
		setDamagePoint(15);
		break;
	case STRONG_GOBLIN:
		mobType = "Strong Goblin";
		setHealthPoint(100);
		setDamagePoint(25);
		break;
	case WOLF:
		mobType = "Wolf";
		setHealthPoint(40);
		setDamagePoint(18);
		break;
	case PEASANT:
		mobType = "Peasant";
		setHealthPoint(50);
		setDamagePoint(10);
		break;
	default:
		std::cout << "Error!";
		break;
	}
}