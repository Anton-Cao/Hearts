#include "player.h"
#include "ai.h"

AI::AI(int m, std::string name) : Player(name){
	setMode(mode);
}

card AI::play(){
	return playCard(0);
}

void AI::setMode(int n){
	mode = n;
}
