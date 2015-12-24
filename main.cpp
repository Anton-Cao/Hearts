#include <iostream>
#include <string>
#include "player.h"
#include "ai.h"

#define NUM_CARDS 13
#define NUM_SUITS 4
#define NUM_PLAYERS 4

int main(){
	std::string name, aiName;
	std::cout<<"Hello! Welcome to Solitaire Hearts!\n";
	std::cout<<"What is your name?\n";
	std::cin>>name;
	std::cout << "What is the AI's name?\n";
	std::cin >> aiName;
    Player player(name);
	AI ai(3, aiName);
	std::cout << "Your name is " << player.getName() << '\n';
	std::cout << "The AI's name is " << ai.getName() << '\n';
}
