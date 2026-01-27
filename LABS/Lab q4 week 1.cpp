#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;
class HittingGame {
private:
    int numPlayers;       
    int yourHits;        
    int enemyHits;        
public:
    HittingGame() {
        srand(time(0));  
        numPlayers = rand() % 5 + 3;  
        yourHits = 0;
        enemyHits = 0;
    }
    void playGame() {
        cout << "Your team has " << numPlayers << " players." << endl;
        for (int i = 1; i <= numPlayers; i++) {
            int yourNumber = rand() % 10 + 1;    
            int enemyNumber = rand() % 10 + 1;   
            
            cout << "Round " << i << ": ";
            cout << "Your number = " << yourNumber << ", Enemy number = " << enemyNumber << " -> ";

            if (yourNumber == enemyNumber) {
                cout << "Enemy got hit by your team!" << endl;
                yourHits++;
            } else {
                cout << "You got hit by the enemy team!" << endl;
                enemyHits++;
            }
        }
    }
    
    void displayResult() {
        cout << "\n--- Game Over ---" << endl;
        cout << "Your team hits: " << yourHits << endl;
        cout << "Enemy team hits: " << enemyHits << endl;

        if (yourHits > enemyHits) {
            cout << "Congratulations! Your team wins!" << endl;
        } else if (yourHits < enemyHits) {
            cout << "Oops! Enemy team wins!" << endl;
        } else {
            cout << "It's a tie!" << endl;
        }
    }
};
int main() {
    HittingGame game;    
    game.playGame();     
    game.displayResult(); 

    return 0;
}

