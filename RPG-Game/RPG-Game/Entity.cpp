#include "Entity.h"
#include <iostream>

void Entity::setHealthPoint(int hp) { healthPoint = hp; }
void Entity::setDamagePoint(int dmg) { damagePoint = dmg; }
void Entity::setIsAlive(bool isA) { isAlive = isA; }



void Entity::printBattleLog(const int& enemyDMG, const int& tempHP)
{
	int rrHP = tempHP - healthPoint;	//stores the hp before the damage was taken
	std::cout << "*Your taken damage: "
		<< rrHP << " | HP: " << tempHP
		<< " -> " << healthPoint << std::endl;
}

void Entity::getDamaged(const int& enemyDMG)
{
	int tempHP = healthPoint; //stores passed hp

	damageMultiplier = (rand() % 11) + 0;
	healthPoint -= (enemyDMG - damageMultiplier);

	if (healthPoint <= 0)
	{
		healthPoint = 0;
		printBattleLog(enemyDMG, tempHP);
		isAlive = false;
	}
	else
	{
		printBattleLog(enemyDMG, tempHP);
	}
}