#include <iostream>
using namespace std;
#include "Player.h"

int scoreTot(int score, int newScore)
{
 score = score + newScore ;
 return score ;
}

int scoreMoy(int scoreMoy, int nbGame , int score)
{
 scoreMoy = score / nbGame;
 return scoreMoy ;
}