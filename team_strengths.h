/*
Group Members: Andy Almeida, Kao Saephan, Nicholas Valencia, Umaran Ahmadzai, Shanil Prasad

declaration of the following class in namespace BASKETBALL_SPACE:
  -class basketball_team

*/

#ifndef team_strengths_h
#define team_strengths_h

namespace BASKETBALL_SPACE{
    using namespace std;

    class Team_Strengths{
        public:
        //declare all setters and getters

        //
        yourChampionshipChance calculateTeamStrength(double offensePoints, double defensePoints);


        private:
        //declare variables in private field
        double offensePoints;
        double defensePoints;

    };

} //end of BASKETBALL_SPACE

#endif //end of team_strengths.h
