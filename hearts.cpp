#include <iostream>
#include <string>

using namespace std;

struct card{
    int num;
    char suit;
};

class Player{
public:
    Player(string n){
        name = n;
        numCards = 0;
    }
    void addCard(int n, char s){
        card c;
        c.num = n;
        c.suit = s;
        cards[numCards] = c;
        numCards++;
    }

private:
    string name;
    card cards[13];
    int numCards;
};

int main(){
    cout<<"Hello! Welcome to Solitaire Hearts!\n";
    cout<<"What is your name?\n";
    string name;
    cin>>name;
    Player player(name);
}
