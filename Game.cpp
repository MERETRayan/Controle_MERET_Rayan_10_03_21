#include <iostream>
using namespace std;
#include "Player.cpp"
#include <random>

int nombreJoueur = 0 ;
string nomJoueur ; 
string nomJ1 ;
string nomJ2 ;
string nomJ3 ;
string nomJ4 ;
int nbGame1 = 0 ;
int nbGame2 = 0 ;
int nbGame3 = 0 ;
int nbGame4 = 0 ;
int musique ; 
int newscore ;
int win = 0 ;



int main (){

cout << "Combien êtes-vous ? \n";
cin >> nombreJoueur ;

if (nombreJoueur==0) {
    cout << "Il est impossible de pouvoir jouer.";
}

if (nombreJoueur>4) {
    cout << "Il est impossible de pouvoir jouer trop de joueur .";
}

else {
    for (int i=1; i<=nombreJoueur ;i++){ 
        cout << "Donnez le nom du joueur numéro " << i << "\n";
        cin >> nomJoueur ;
        if (i==1){
            nomJ1 = nomJoueur ;
        }
        if (i==2){
            nomJ2 = nomJoueur ;
        }
        if (i==3){
            nomJ3 = nomJoueur ;
        }
        if (i==4){
            nomJ4 = nomJoueur ;
        }
   
    }
    Player Joueur1 (nomJ1,0) ; 
    Player Joueur2 (nomJ2,0) ; 
    Player Joueur3 (nomJ3,0) ; 
    Player Joueur4 (nomJ4,0) ; 

    while (win<1){

        while (musique == 0 || musique > 5) {
            cout << "Joueur 1 quel  musique choississez-vous ? \n";
            cout << "1 / 2 / 3 / 4 / 5 \n" ;
            cin >> musique ; 
        }
        nbGame1 =nbGame1+1 ;
        newscore = rand() % 50+1 ; 
        newscore = newscore+50 ; 

        Joueur1.scoreTot(newscore);
        Joueur1.scoreMoy(nbGame1);
        Joueur1.montrerScore();
        musique = 0 ;

        if (nombreJoueur==2){
            while (musique == 0 || musique > 5) {
                cout << "Joueur 2 quel  musique choississez-vous ? \n";
                cout << "1 / 2 / 3 / 4 / 5 \n" ;
                cin >> musique ; 
            
        }
            nbGame2 =nbGame2+1 ;
            newscore = rand() % 50+1 ; 
            newscore = newscore+50 ; 

            Joueur2.scoreTot(newscore);
            Joueur2.scoreMoy(nbGame2);
            Joueur2.montrerScore();
            musique = 0 ;
        }
        if (nombreJoueur==3){
            while (musique == 0 || musique > 5) {
                cout << "Joueur 3 quel  musique choississez-vous ? \n";
                cout << "1 / 2 / 3 / 4 / 5 \n" ;
                cin >> musique ; 
        }
            nbGame3 =nbGame3+1 ;
            newscore = rand() % 50+1 ; 
            newscore = newscore+50 ; 

            Joueur3.scoreTot(newscore);
            Joueur3.scoreMoy(nbGame3);
            Joueur3.montrerScore();
            musique = 0 ;
        }
        if (nombreJoueur==4){
            while (musique == 0 || musique > 5) {
                cout << "Joueur 4 quel  musique choississez-vous ? \n";
                cout << "1 / 2 / 3 / 4 / 5 \n" ;
                cin >> musique ; 
        }
            nbGame4 =nbGame4+1 ;
            newscore = rand() % 50+1 ; 
            newscore = newscore+50 ; 

            Joueur4.scoreTot(newscore);
            Joueur4.scoreMoy(nbGame4);
            Joueur4.montrerScore();
            musique = 0 ;
        }
    }
 }
}