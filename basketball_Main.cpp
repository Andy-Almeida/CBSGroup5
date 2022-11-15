/*
Group Members: Andy Almeida, Kao Saephan, Nicholas Valencia, Umaran Ahmadzai, Shanil Prasad

*/


#include "unittests.h"
#include "basketball_team.h"
#include "headers.h"

//using namespace std; 
using namespace BASKETBALL_SPACE;

int main() {
    Basketball_Team Coders("theCoders", "codeConference", 99, 100, 101, 102 );
     

    cout << "the win rate is " << Coders.calculateWinrate(Coders.getGamesWon(), Coders.getGamesPlayed()) << endl;
    cout << "the weighted score is " << Coders.calculateWeightedScore(Coders.getOffensePoints(), Coders.getDefensePoints()) << endl;
    cout << "the championship chance is: " << toStr_yourChampionshipChance(Coders.calculateTeamsChances(Coders.calculateWeightedScore(Coders.getOffensePoints(), Coders.getDefensePoints()))) << endl;

    cout << "program runs fine :)" << endl;
    return 0; 

} //end of main function
