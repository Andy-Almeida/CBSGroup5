#ifndef basketball_teamvector_h
#define basketball_teamvector_h

namespace BASKETBALL_SPACE{
  using namespace std;
  
  class BasketballTeamVector{
    public:
        //Default Constructor
        BasketballTeamVector();

        //Adds team to the list
        void addTeam(Basketball_Team team);

        //Get team from the list using thier name
        void getTeam(string name);

        //Add any function for vector manipulation

    private:
        vector<Basketball_Team> teamlist;
        string listname;

  }; //end of BasketBall_team class
  
} //end of BASKETBALL_SPACE

#endif //end of basketball_team_h 
