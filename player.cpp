#include "player.h"

Player::Player(std::string name){
	setName(name);
}

void Player::setName(std::string in){
	name = in;
}

void Player::addCard(int n, char s){
	card c;
	c.num = n;
	c.suit = s;
	cards.push_back(c);
}

bool Player::playCard(int n, char s){   //1 if player has card, 0 otherwise
	bool ret = 0;
	for(int i = 0; i < cards.size(); i++){
		if(cards.at(i).num == n && cards.at(i).suit == s){
			ret = 1;
			cards.erase(cards.begin() + i);
		}
	}
	return ret;
}

std::string Player::getName(){
	return name;
}

std::vector<card> Player::getCards(){
	return cards;
}

int Player::getNumCards(){
	return cards.size();
}
