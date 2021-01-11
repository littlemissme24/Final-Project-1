#pragma once
#include "Header.h"
class Character
{
	//makes var be able to be used by other clasees
public:
	Character();
	string characterName;
	string characterRace;
	string characterSex;

	vector <string> playerRace;

	int level;
	int currentXP;
	int baseXP;
	int XP_4_NextLevel;
	int maxLevel;
	int minLevel;
	int health;
	int totalHealth;
	int maxHealth;
	int heal;

	// Function
	void characterCreation();
};
