/*
declaration of the following class in namespace BASKETBALL_SPACE:
  -class basketball_team
  
*/

#ifndef basketball_team_h
#define basketball_team_h

#include "headers.h"

namespace BASKETBALL_SPACE{
  using namespace std;
  
  //A class to classify each team with a Championship Win Chance
  enum class yourChampionshipChance {GreatChance, GoodChance, LowChance, ExtremelyUnlikely, NA};

  class Basketball_Team{
    public:
    
      //Default Constructor
      Basketball_Team();

      //Parameterized Constructor
      Basketball_Team(string name, string conference, double gamesWon, double gamesPlayed, double offencePoints, double defencePoints);

      double calculateWinrate(double gamesWon, double gamesPlayed); //this is a function

      //this function takes in the raw offense, defense, and winRate scores then gives them a weighted score out of 100. 
      double calculateWeightedScore(double offensePoints, double defensePoints, double winRate); 

      //based on the weighted score out of 100, this function calculates yourChampionshipChance from
      //enum class yourChampionshipChance {GreatChance, GoodChance, LowChance, ExtremelyUnlikely }
      yourChampionshipChance calculateTeamsChances(double weightedScore); //this is a function

      //Getters
      string getName() const;
      string getConference() const;
      double getGamesWon() const;
      double getGamesPlayed() const;
      double getWinRate() const;    
      double getOffensePoints() const;
      double getDefensePoints() const;
      double getWeightedScore() const;
      yourChampionshipChance getProbableChance() const;

      //Setters
      void setName(string newName);
      void setConference(string newConference);
      void setGamesWon(double newGamesWon);
      void setGamesPlayed(double newGamesPlayed);
      void setWinRate(double newWinRate);
      void setOffencePoints(double newOffencePoints);
      void setDefencePoints(double newDefencePoints);
      void setWeightedScore(double newWeightedScore);
      void setOffencePoints(yourChampionshipChance newChance);
      
    private:
      string name;
      string conference;
      double gamesWon;
      double gamesPlayed;
      double winRate;    
      double offensePoints;
      double defensePoints;
      double weightedScore;
      yourChampionshipChance probableChance;
  }; //end of BasketBall_team class
  
} //end of BASKETBALL_SPACE

#endif //end of basketball_team_h 
