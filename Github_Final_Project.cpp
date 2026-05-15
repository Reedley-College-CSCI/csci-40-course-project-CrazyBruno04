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
struct CharacterBackground
{
    string name;
    string race;
    string characterClass;
    string characterBackground;
};

// Character Stats
struct CharacterStats
{
    int strength;
    int intelligence;
    int dexterity;
    int wisdom;
    int constitution;
    int charisma;
    int experiencePoints;
    int level;
};

// Inventory
struct CharacterInventory
{
    string itemName;
    int itemQuantity;
};

// Inventory Limit
struct InventoryLimit
{
    CharacterInventory items[20];
    int inventoryCount;
};

struct Character
{
    CharacterBackground background;
    CharacterStats stats;
    CharacterInventory inventory;
};
// Character Inputs
int main() {
    Character user;
    cout << "Greeting User and welcome the the Character Tracker!" << endl;

    cout << "Please enter your character's name: " << endl;
    getline(cin, user.background.name);

    cout << "Enter your character's race: " << endl;
    getline(cin, user.background.race);

    cout << "Enter your character's class: " << endl;
    getline(cin, user.background.characterClass);

    cout << "Enter your character's background: " << endl;
	getline(cin, user.background.characterBackground);

    cout << "Enter your character's stats: " << endl;

    cout << "Strength: " << endl;
    cin >> user.stats.strength; 

    cout << "Intelligence: " << endl;
    cin >> user.stats.intelligence;

    cout << "Dexterity: " << endl;
    cin >> user.stats.dexterity;

    cout << "Wisdom: " << endl;
    cin >> user.stats.wisdom;

    cout << "Constitution: " << endl;
    cin >> user.stats.constitution;

    cout << "Charisma: " << endl;
    cin >> user.stats.charisma;

    cout << "Experience Points: " << endl;
    cin >> user.stats.experiencePoints;

    user.stats.level = (user.stats.experiencePoints / 1000) + 1;

    // Inventory
    cout << "Enter an item to add to your inventory: " << endl;
    getline(cin >> ws, user.inventory.itemName);

    cout << "Enter the quantity of " << user.inventory.itemName << " to add: ";
    cin >> user.inventory.itemQuantity;

    // Create a loop to allow multiple items

    // Character Summary
    cout << "\n==== Character Summary ====\n";
    cout << "Name: " << user.background.name << endl;
    cout << "Race: " << user.background.race << endl;
    cout << "Class: " << user.background.characterClass << endl;
    cout << "Background: " << user.background.characterBackground << endl;
    cout << "Strength: " << user.stats.strength << endl;
    cout << "Intelligence: " << user.stats.intelligence << endl;
    cout << "Dexterity: " << user.stats.dexterity << endl;
    cout << "Wisdom: " << user.stats.wisdom << endl;
    cout << "Constitution: " << user.stats.constitution << endl;
    cout << "Charisma: " << user.stats.charisma << endl;
    cout << "Experience Points: " << user.stats.experiencePoints << endl;
    cout << "Level: " << user.stats.level << endl;

    // Inventory Summary
    cout << "Inventory: " << user.inventory.itemName << " x" << user.inventory.itemQuantity << endl;
    return 0;
}
