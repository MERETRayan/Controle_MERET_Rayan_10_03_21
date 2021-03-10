#include <iostream>
using namespace std;

class Player {
        string nom ;
        int score = 0 ;
        int moyenne = 0 ;
    public:
        int montrerScore();
        int scoreTot (int);
        int scoreMoy (int);
        Player();
        Player(string name , int score  ) : nom (name) , score (score)  {}
};