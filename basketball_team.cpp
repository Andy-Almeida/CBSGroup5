/*
Group Members: Andy Almeida, Kao Saephan, Nicholas Valencia, Umaran Ahmadzai, Shanil Prasad
*/

#include "basketball_team.h"

namespace BASKETBALL_SPACE{
  //implement all functions for class basketball_team
  //REMEMBER ALL FUNCTIONS MUST HAVE SCOPE RESOLUTION OPERATOR WHICH ARE DOUBLE COLONS
  //Format: Basketball_Team::someFunction()
  
  //ALSO REMEMBER ALL GET FUNCTIONS MUST BE DECLARED CONST
  //Format: basketball_team::getFunction() const{ function body }
  
  //REMEMBER EVERYTHING MUST STAY INSIDE THE NAMESPACE BASKETBALL_SPACE

  Basketball_Team::Basketball_Team(){
      name = "N/A";
      conference = "N/A";
      gamesWon = 0;
      gamesPlayed = 0;
      winRate = 0;
      offensePoints = 0;
      defensePoints = 0;
      weightedScore = 0;
      probableChance = yourChampionshipChance::NA;
  }

  //Getters
    string Basketball_Team::getName() const{
      return name;
    }

    string Basketball_Team::getConference() const{
      return conference;
    }

    double Basketball_Team::getGamesWon() const{
      return gamesWon;
    }

    double Basketball_Team::getGamesPlayed() const{
      return gamesPlayed;
    }

    double Basketball_Team::getWinRate() const{
      return winRate;
    }    

    double Basketball_Team::getOffensePoints() const{
      return offensePoints;
    }
    
    double Basketball_Team::getDefensePoints() const{
      return defensePoints;
    }
    double Basketball_Team::getWeightedScore() const{
      return weightedScore;
    }

    yourChampionshipChance Basketball_Team::getProbableChance() const{
      return probableChance;
    }

  //I think that this could be put into overrides
  //this function simply turns the yourChampionshipChance enumerated class object into a string
  string toStr_yourChampionshipChance( yourChampionshipChance chance ){
      switch (chance){
          case yourChampionshipChance::GreatChance:
              return "Great Chance";
          case yourChampionshipChance::GoodChance:
              return "Good Chance";
          case yourChampionshipChance::LowChance:
              return "Low Chance";
          case yourChampionshipChance::ExtremelyUnlikely:
              return "Extremely Unlikely";
          default:  //this will not happen. just to make this compiler not generate a warning.
              return "Nobody Knows, this could be an error";  
      } 
  }//end of the function 
  
  
} //end of BASKETBALL_SPACE
