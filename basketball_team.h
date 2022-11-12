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
    //declare constructor(s)
    //declare all setters and getters
    //ALSO REMEMBER ALL GET FUNCTIONS MUST BE DECLARED CONST


    //this is a function that calculates cumulative winRate from the years 2021, 2020, 2019
    double calculateWinrate(double gamesWOns, double gamesPlayed); 
    
    //this is a function that prints teamName, weightedScore, winRate, thisTeamsChances. 
    //be sure to convert thisTeamsChances into a string by calling the function toStr_yourChampionshipChance 
    void printStatistics(); 
    
    private:
    //declare variables in private fields
    string teamName;
    double weightedScore;
    double gamesWon;
    double gamesPlayed;
    double winRate;
    yourChampionshipChance thisTeamsChances;
    
  }; //end of BasketBall_team class
  
} //end of BASKETBALL_SPACE

#endif //end of basketball_team_h 
