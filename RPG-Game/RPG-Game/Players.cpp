#include "Players.h"

enum PlayersClasses { NOTHING = 0, KNIGHT, TANK, ARCHER, MAGE };

// ##### INTIALIZING FUNCTIONS #####

Players::Players() {}

Players::Players(int userClassChoice)
{
	setClass(userClassChoice);
}

void Players::setClass(int userClassChoice)
{
	PlayersClasses playersClasses = static_cast<PlayersClasses>(userClassChoice);

	switch (playersClasses)
	{
	case KNIGHT:
		setHealthPoint(150);
		setDamagePoint(20);
		charClass = "Knight";
		break;
	case TANK:
		setHealthPoint(200);
		setDamagePoint(18);
		charClass = "Tank";
		break;
	case ARCHER:
		setHealthPoint(120);
		setDamagePoint(15);
		charClass = "Archer";
		break;
	case MAGE:
		setHealthPoint(100);
		setDamagePoint(22);
		charClass = "Mage";
		break;
	default:
		std::cout << "Error! Class is not implemented yet!";
		break;
	}
};

void Players::printInfo()
{
	std::cout << "##############" << std::endl;
	std::cout << "Class: " << charClass << std::endl;
	std::cout << "HP: " << getHealthPoint() << std::endl;
	std::cout << "Damage: " << getDamagePoint() << std::endl;
	std::cout << "##############" << std::endl << std::endl;
}