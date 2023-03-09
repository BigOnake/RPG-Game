#pragma once
#ifndef ENTITY_H
#define ENTITY_H

class Entity {
private:
	int damageMultiplier;
	int healthPoint;
	int	damagePoint;
	bool isAlive;

	void printBattleLog(const int& enemyDMG, const int& tempHP);

protected:

	int getHealthPoint() const { return healthPoint; }
	void setHealthPoint(int hp);

	int getDamagePoint() const { return damagePoint; }
	void setDamagePoint(int dmg);

	bool getIsAlive() const { return isAlive; }
	void setIsAlive(bool isA);

public:
	const int& dispHP = healthPoint;
	const int& dispDMG = damagePoint;
	const bool& dispIsAlive = isAlive;

	void getDamaged(const int& enemyDMG);
};
#endif // !ENTITY_H