#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#define NUM_CARDS 13
#define NUM_SUITS 4

struct card{
	int num;
	char suit;
};

class Player;

/*
 * The player
 * Controlled by user or CPU
 */
class Player{
private:
	std::string name;
	std::vector<card> cards;
public:
	Player(std::string);
	std::string getName();
	bool playCard(int, char);
	std::vector<card> getCards();
	int getNumCards();
	void setName(std::string);
	void addCard(int, char);
};
#endif
