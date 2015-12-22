#include <iostream>
#include <string>
#include "player.h"

#define NUM_CARDS 13
#define NUM_SUITS 4
#define NUM_PLAYERS 4

int main(){
	std:: cout<<"Hello! Welcome to Solitaire Hearts!\n";
	std::cout<<"What is your name?\n";
	std::string name;
	std::cin>>name;
    Player player(name);
	std::cout << "Your name is " << player.getName() << '\n';
}
