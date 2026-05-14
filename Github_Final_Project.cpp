// CSCI-40 Final Project
// Author: [Bruno Ochoa]

/*
 * Description: My project is a character tracker for Dungeons and Dragons or simply for character creation.
 * This program will allow users to keep track of information such as stats, experience, inventory, character backgrounds, and more.
 * Users will be able to update or change any information as they please at any time as well.
 * With a save and loading feature, userswill be able to come back to their characters as they see fit.
 * The program helps with keeping track of all this information as well as allowing the user to add buffs or debuffs to give as much creative expression and ease of use as possible.
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Character Background
string name;
string race;
string characterClass;
string background;

// Character Stats
int strength;
int intelligence;
int dexterity;
int wisdom;
int constitution;
int charisma;
int experiencePoints;
int level;

// Inventory
string itemName;
int itemQuantity;

// Character Inputs
int main() {
    cout << "Greeting User and welcome the the Character Tracker!" << endl;

    cout << "Please enter your character's name: " << endl;
    getline(cin, name);

    cout << "Enter your character's race: " << endl;
    getline(cin, race);

    cout << "Enter your character's class: " << endl;
    getline(cin, characterClass);

    cout << "Enter your character's background: " << endl;
	getline(cin, background);

    cout << "Enter your character's stats: " << endl;

    cout << "Strength: " << endl;
    cin >> strength; 

    cout << "Intelligence: " << endl;
    cin >> intelligence;

    cout << "Dexterity: " << endl;
    cin >> dexterity;

    cout << "Wisdom: " << endl;
    cin >> wisdom;

    cout << "Constitution: " << endl;
    cin >> constitution;

    cout << "Charisma: " << endl;
    cin >> charisma;

    cout << "Experience Points: " << endl;
    cin >> experiencePoints;

    level = (experiencePoints / 1000) + 1;

    // Inventory
    cout << "Enter an item to add to your inventory: " << endl;
    getline(cin >> ws, itemName);

    cout << "Enter the quantity of " << itemName << " to add: ";
    cin >> itemQuantity;

    // Create a loop to allow multiple items

    // Character Summary
    cout << "\n==== Character Summary ====\n";
    cout << "Name: " << name << endl;
    cout << "Race: " << race << endl;
    cout << "Class: " << characterClass << endl;
    cout << "Background: " << background << endl;
    cout << "Strength: " << strength << endl;
    cout << "Intelligence: " << intelligence << endl;
    cout << "Dexterity: " << dexterity << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Constitution: " << constitution << endl;
    cout << "Charisma:" << charisma << endl;
    cout << "Experience Points: " << experiencePoints << endl;
    cout << "Level: " << level << endl;

    // Inventory Summary
    cout << "Inventory: " << itemName << " x" << itemQuantity << endl;
    return 0;
}
