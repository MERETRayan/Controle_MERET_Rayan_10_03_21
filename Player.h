#include <iostream>
using namespace std;

class Player {
        string name ;
        int score = 0 ;
        int moyenne = 0 ;
        int nbGame = 0 ;
    public:
        int scoreTot ();
        int scoreMoy ();
        Player();
        Player(string name);
};