/*
declaration of the following class in namespace BASKETBALL_SPACE:
  -class basketball_team
  
*/

#ifndef basketball_team_h
#define basketball_team_h

namespace BASKETBALL_SPACE{
  using namespace std;
  
  class Basketball_Team{
    public:
    //declare all setters and getters

    double calculateWinrate(double gamesWOns, double gamesPlayed); //this is a function
    void printChanceAtChampionship(); //this is a function
    
    private:
    //declare variables in private fields
    double gamesWon;
    double gamesPlayed;
    double winRate;
    yourChampionshipChance probableChance;

  }; //end of BasketBall_team class
  
} //end of BASKETBALL_SPACE

#endif //end of basketball_team_h 
