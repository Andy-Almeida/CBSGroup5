/*
Group Members: Andy Almeida, Kao Saephan, Nicholas Valencia, Umaran Ahmadzai, Shanil Prasad
*/

#include "championshipChance.h"

namespace BASKETBALL_SPACE{

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
