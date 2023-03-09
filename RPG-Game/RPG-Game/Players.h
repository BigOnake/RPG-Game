#pragma once
#include "Entity.h"
#include <iostream>
#include <string>
#ifndef PLAYERS_H
#define PLAYER_H

class Players : public Entity
{
private:
	std::string charClass = "";
	//void printBattleLog(const int& enemyDMG, int& tempHP);

public:

	Players();
	Players(int userClassChoice);

	void setClass(int userClassChoice);
	void printInfo();
};

#endif // !PLAYERS_H