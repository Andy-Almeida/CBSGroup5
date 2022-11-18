/*
Group Members: Andy Almeida, Kao Saephan, Nicholas Valencia, Umaran Ahmadzai, Shanil Prasad

*/


#include "basketball_teamvector.h"
using namespace BASKETBALL_SPACE;

int main() {
   using namespace std;

    //testing Kao's cumulative win rate function
    BasketballTeamVector teamCoders;
    teamCoders.setYear2019();
    teamCoders.setYear2020();
    teamCoders.setYear2021();

    //User interface, allows the search of any team, then prints their scores
    string control = "";
    while (control != "1"){
        cout << "Enter a team name or 1 to quit: ";
        getline(cin, control);

        if (teamCoders.checkName(control) == true){
            teamCoders.printData(control);
        }
        else {
            cout << "That team does not exist." << endl;
        }
        cout << endl;
    }
    return 0; 

} //end of main function
