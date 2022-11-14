/*
Implementation of the basketball_teamvector.h functions

*/

#include "basketball_teamvector.h"
#include "basketball_team.h"

namespace BASKETBALL_SPACE{

  //implement all functions for class basketball_team
  //REMEMBER ALL FUNCTIONS MUST HAVE SCOPE RESOLUTION OPERATOR WHICH ARE DOUBLE COLONS
  //Format: Basketball_Team::someFunction()
  
  //ALSO REMEMBER ALL GET FUNCTIONS MUST BE DECLARED CONST
  //Format: basketball_team::getFunction() const{ function body }
  
  //REMEMBER EVERYTHING MUST STAY INSIDE THE NAMESPACE BASKETBALL_SPACE

    //Default Constructor
    BasketballTeamVector::BasketballTeamVector(){
    }

    //Adds team to the teamlist
    void BasketballTeamVector::addTeam(Basketball_Team team){
        teamlist.push_back(team);
    }

    //Get team from teamlist using thier name
    Basketball_Team BasketballTeamVector::getTeam(string name){

        //Iterate through teamlist
        for (int i = 0; i < teamlist.size(); i++) {

            //Compare the team name at each element to the passed name, return the object if they match
            if (teamlist.at(i).getName() == name) {
                return teamlist.at(i);
            }
        }
        
    } // end of getTeam() function


} //end of BASKETBALL_SPACE
