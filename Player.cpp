#include <iostream>
using namespace std;
#include "Player.h"

int Player::scoreTot(int newScore)
{
 score = score + newScore ;
 return score ;
}

int Player::scoreMoy(int nbGame)
{
 moyenne = score / nbGame;
 return moyenne ;
}

int Player::montrerScore()
{
 cout << nom << " Total : " << score << " ScoreMoy : "<< moyenne << "\n";
 return 0 ;
}

