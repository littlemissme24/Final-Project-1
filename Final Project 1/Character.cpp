#include "Character.h"


Character::Character()
{

	// variables
	playerRace = { "human", "elf", "orc", "khajiit", "fairy" };

	characterName = "";
	characterRace = "";
	characterSex = "";

	level = 1;
	currentXP = 0;
	baseXP = 100;
	XP_4_NextLevel = baseXP;
	health = 0;
	totalHealth = 0;
	maxHealth = 0;
	heal = 0;
	maxLevel = 50;
	minLevel = 1;
}
void Character::characterCreation() {



	//Character creation and introduction
	cout << "Please enter what you want your chatacters name to be : " << endl;
	cin >> characterName;
	cout << " Hello " << characterName << " You will be creating a character to walk through a path fighting monsters that appear along the way." << endl;
	cout << " You will be given choices on your actions, naping heals you and running away can save you or punish you." << endl;
	cout << " As you level up, so does the monsters. Good Luck!!." << endl;
	cout << "Please input what you want " << characterName << "'s race to be :" << endl;
	cout << "Human- Starts with 90 health and level 2" << endl;
	cout << "Elf- Starts with 80 health with increase healing." << endl;
	cout << "Orc- Stars with 120 health with a higher sucessfull block percentage." << endl;
	cout << "Khajiit- Stars with 100 health and more percentage change at a sucessfull run away." << endl;
	cout << "Fairy- health starts at 85 and gains 1 health when damage is taken." << endl;
	cout << "Enter your race below." << endl;
	cin >> characterRace;
	//Makes anything entered, lower case.
	for_each(characterRace.begin(), characterRace.end(), [](char& c) {
		c = ::tolower(c);
		});
	//to set the correct health and character specialty
	for (int i = 0; i < sizeof(playerRace); i++) {
		if (characterRace == "human") {
			health = 90;
			level = level++;
			break;
		}
		if (characterRace == "elf") {
			health = 80;
			heal = heal * 2;
			break;
		}
		if (characterRace == "Orc") {
			health = 120;
			break;
		}
		if (characterRace == "Khajiit") {
			health = 100;
			break;
		}
		if (characterRace == "fairy") {
			health = 85;
			break;
		}
		else
		{
			health = 100;
			break;
		}
	}

	cout << "Please input what you want " << characterName << "'s sex to be :" << endl;
	cin >> characterSex;

	// Add cool loading screen 
	cout << "\t\t\tHang tight while we are creating your character." << endl;
	Sleep(500);
	system("cls");

	cout << "\t\t\tHang tight while we are creating your character.." << endl;
	Sleep(500);
	system("cls");

	cout << "\t\t\tHang tight while we are creating your character..." << endl;
	Sleep(500);
	system("cls");

	cout << "\t\t\tHang tight while we are creating your character...." << endl;
	Sleep(500);
	system("cls");


	totalHealth = health;
	maxHealth = totalHealth;
}