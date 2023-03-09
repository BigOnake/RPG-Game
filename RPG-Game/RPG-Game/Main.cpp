#include <iostream>
#include <string>
#include <windows.h>
#include "Players.h"
#include "Mob.h"

void displayStartingScreen();
void createFirstChar(Players& player1);
int selectClass();

void startFight(Players& player1);

int main()
{
	// INITIALIZE & DECLARE
	srand(unsigned(time(0)));
	Players player1;

	// START GAME FUNCTIONS
	displayStartingScreen();
	createFirstChar(player1);

	// TRAINING FIGHT
	std::cout << "Let's have a practice! Get ready to fight!" << std::endl;
	std::cout << "Press any button to continue..." << std::endl;
	std::cin.ignore();
	startFight(player1);

	std::cout << "Training is finished!" << std::endl;
	std::cin.ignore();

	return 0;
}

void displayStartingScreen()
{
	std::cout << "##################" << std::endl;
	std::cout << "  Welcome, User!  " << std::endl << std::endl;
}

void createFirstChar(Players& player1)
{
	int charClass;

	std::cout << "Let's create out first character!" << std::endl;
	charClass = selectClass();

	player1.setClass(charClass);
	std::cout << "You have created your first character!" << std::endl;
	player1.printInfo();
}

int selectClass()
{
	int userClassChoice;

	std::cout << "Select a class:" << std::endl;
	std::cout << "[1] - Knight (HP 150, DMG 20)" << std::endl;
	std::cout << "[2] - Tank (HP 200, DMG 18)" << std::endl;
	std::cout << "[3] - Archer (HP 120, DMG 15)" << std::endl;
	std::cout << "[4] - Mage (HP 100, DMG 22)" << std::endl << std::endl;

	std::cout << "Your choice:\t";
	std::cin >> userClassChoice;

	while (userClassChoice < 1 || userClassChoice > 4)
	{
		std::cout << "Invalid input. Please enter again." << std::endl;
		std::cout << "Your choice:\t" << std::endl;
		std::cin >> userClassChoice;
	}

	return userClassChoice;
}

void startFight(Players& player1)
{
	Mob mob(3);

	std::cout << "Fight with " << mob.dispMobType << std::endl;

	while (player1.dispIsAlive && mob.dispIsAlive)
	{
		std::cout << "__________________________________________" << std::endl;

		player1.getDamaged(mob.dispDMG);
		if (player1.dispIsAlive)
			mob.getDamaged(player1.dispDMG);

		Sleep(800);
	}

	if (player1.dispIsAlive)
		std::cout << "Enemy is defeated!" << std::endl << std::endl;
	else
		std::cout << "You are defeated!" << std::endl << std::endl;
}