#ifndef overriding_h
#define overriding_h

#include "basketball_team.h"
#include "headers.h"

namespace BASKETBALL_SPACE{
    using namespace std;
  
    //description: Okay I be wilin out but hear me out, 
    //I love doing this for my programs, and it makes debugging a dream

        //Overriding << Operator to cout << Baskteball_Team
        ostream & operator<<(ostream & out, const Basketball_Team & team);

        //Overriding << Operator to cout << yourChampionshipChance
        ostream & operator<<(ostream & out, const yourChampionshipChance & probableChance);

        //Overriding << Operator to cout << vector<Basketball_Team>
        ostream & operator<<(ostream & out, const vector<Basketball_Team> & teamlist);


} //end of BASKETBALL_SPACE

#endif //end of overriding_h