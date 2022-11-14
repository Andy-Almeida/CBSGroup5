#ifndef basketball_teamvector_h
#define basketball_teamvector_h

#include "headers.h"

namespace BASKETBALL_SPACE{
  using namespace std;

  class BasketballTeamVector{
    public:
        //Default Constructor
        BasketballTeamVector();

        //Adds team to the list
        void addTeam(Basketball_Team team);

        //Get team from the list using thier name
        Basketball_Team getTeam(string name);

        //Add any function for vector manipulation

    private:
        vector<Basketball_Team> teamlist;
    
        //not sure what this string is for -kao
        string listname;

  }; //end of BasketBall_team class
  
} //end of BASKETBALL_SPACE

#endif //end of basketball_team_h 
