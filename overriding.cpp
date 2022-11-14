#include "overriding.h"

namespace BASKETBALL_SPACE{

   //Overriding << Operator to cout << Baskteball_Team
   ostream & operator<<(ostream & out, const Basketball_Team & team){
      out << "Team:" << team.getName() << ", Conference:" << team.getConference() << ", Championship Win Chance:" << team.getProbableChance() << endl;
      out << "   Games Played:" << team.getGamesPlayed() << ", Games Won:" << team.getGamesWon() << ", Win Rate:" << team.getWinRate() << endl; 
      out << "   Offence Points:" << team.getOffensePoints() << ", Defence Points:" << team.getDefensePoints() << ", Weighted Score:" << team.getWeightedScore() << endl;
      return out;
   }

} //end of BASKETBALL_SPACE
