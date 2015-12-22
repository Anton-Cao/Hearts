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

std::string Player::getName(){
	return name;
}

std::vector<card> Player::getCards(){
	return cards;
}

int Player::getNumCards(){
	return cards.size();
}
