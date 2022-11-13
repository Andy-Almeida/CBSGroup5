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
