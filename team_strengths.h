/*
Group Members: Andy Almeida, Kao Saephan, Nicholas Valencia, Umaran Ahmadzai, Shanil Prasad

declaration of the following class in namespace BASKETBALL_SPACE:
  -class Team_Strengths
*/

#ifndef team_strengths_h
#define team_strengths_h

namespace BASKETBALL_SPACE{
    using namespace std;

    class Team_Strengths{
        public:
        //declare constructor(s)
        //declare all setters and getters
        //ALSO REMEMBER ALL GET FUNCTIONS MUST BE DECLARED CONST

        //this function takes in the raw offense, defense, and winRate scores then gives them a weighted score out of 100. 
        double calculateWeightedScore(double offensePoints, double defensePoints, double winRate2021); //this is a function

        //based on the weighted score out of 100, this function calculates yourChampionshipChance 
        // and calls the toStr_yourChampionshipChance function to return a string of that chance 
        //here is the enumerated class from championshipChance.h file: 
        //enum class yourChampionshipChance {GreatChance, GoodChance, LowChance, ExtremelyUnlikely }
        string calculateTeamsChances(double weightedScore); //this is a function

        private:
        //declare variables in private field
        double offensePoints2021;
        double defensePoints2021;
        double winRate2021;
        double weightedScore;

    };

} //end of BASKETBALL_SPACE

#endif //end of team_strengths.h
