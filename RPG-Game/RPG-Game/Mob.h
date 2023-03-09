#pragma once
#include "Entity.h"
#include <iostream>
#include <string>
#ifndef MOB_H
#define MOB_H

class Mob : public Entity
{
private:
	std::string mobType = "";
	//void printBattleLog(const int& enemyDMG, int& tempHP);

public:
	void setMobType(int lMobType);

	const std::string& dispMobType = mobType;

	Mob(int mobType);
};

#endif