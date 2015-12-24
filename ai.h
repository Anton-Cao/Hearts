#ifndef AI_H
#define AI_H
#include "player.h"

/*
 * Computer controlled player
 */
class AI : public Player{
private:
	int mode; //in case there are multiple ai strategies in the future
public:
	AI(int, std::string);
	card play();
	void setMode(int);
};
#endif
