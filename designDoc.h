/*
Everything in this file is commented!!

Group Members: Andy Almeida, Kao Saephan, Nicholas Valencia, Umaran Ahmadzai, Shanil Prasad


What this whole program does:
    Main function:
        1) read in files from 2021, 2020, and 2019 to obtain the team names, games won, games played. 
        2) Creates a basketball_team class that will store the team names, games won, games played
        3) Calculates the win rate of these teams and store it in basketball_team 
        4) Creates a team_strengths class that calculates the weighted score then team's chances and 
            stores the string version of the chance in basketball_team
        5) Creates a vector<basketball_team> that stores basketball_team objects
        6) Call printStatistics() to print out a team's teamName, weightedScore, winRate, thisTeamsChances.

Interactive Component:
    We would like to create an interactive UI so the user can look up a team's name 
    and see the team's statistics: teamName, weightedScore, winRate, thisTeamsChances
    We need to discuss if we want to implement this. 
     
  
FUNCTIONS of this program
    from class team_strengths, this is a helper class 
        //this function takes in the raw offense, defense, and winRate scores then gives them a weighted score out of 100. 
        double calculateTeamStrength(double offensePoints, double defensePoints, double winRate2021); //this is a function

        //based on the weighted score out of 100, this function calculates yourChampionshipChance 
        // and calls the toStr_yourChampionshipChance function to return a string of that chance 
        //here is the enumerated class from championshipChance.h file: 
        //enum class yourChampionshipChance {GreatChance, GoodChance, LowChance, ExtremelyUnlikely }
        string calculateTeamsChances(double weightedScore); //this is a function

    from class basketball_team, this is our central class
        //this is a function that calculates cumulative winRate from the years 2021, 2020, 2019
        double calculateWinrate(double gamesWOns, double gamesPlayed);

        //this is a function that prints teamName, weightedScore, winRate, thisTeamsChances. 
        //be sure to convert thisTeamsChances into a string by calling the function toStr_yourChampionshipChance 
        void printChanceAtChampionship();

    from championshipChance.h which is a utility file
        //this enumerated class we use to assign a team's chance at the championships
        enum class yourChampionshipChance {GreatChance, GoodChance, LowChance, ExtremelyUnlikely };

        //this is the to_string function for our enumerated class 
        string toStr_yourChampionshipChance( yourChampionshipChance chance )

*/ 




/*
    How I would Layout this Program -Andy

    basketball_team.h
        description: contains a class that will store the data on each team
        class Basketball_Team
            data:
                string name;
                string conference;
                double gamesWon;
                double gamesPlayed;
                double winRate;
                double offensePoints;
                double defensePoints;
                double weightedScore;
                yourChampionshipChance probableChance;
            functions:
                Basket_Ball(string name, string conference, gamesWon, gamesPlayed, offensePoints, defensePoints){
                    name = name;
                    conference = conference;
                    gamesWon = gamesWon
                    gamesPlayed = gamesPlayed;
                    offencePoints = offencePoints;
                    defencePoints = defencePoints;
                    winRate = this.calculateWinrate();? or with parameters if this is not possible which i dont think it is
                    weightedScore = this.calculatedWeightedScore();
                    probableChance = this.calculateTeamsChances

                }
                double calculateWinrate();
                    description: calculate a winrate based on gamesplayed and gameswon
                    Pseudo:{
                        return gamesWon/gamesPlayed;
                    }

                void printChanceAtChampionship();
                    I personally believe we should make getters, but I prefer overriding <<
                    Pseduo: {
                        return probableChance //this is possible with overriding!
                    }

                double calculateWeightedScore();
                    description: calculates a score from a base of 100 based on stats

                yourChampionshipChance calculateTeamsChances(); 
                    description: given the weighted score, apply an appropriate probable chance

    basketball_teamvector.h
        description: contains a class that will store the vector of basketball_teams along with potential functions
        class Team_Vector
            data: 
                vector<Basketball_Team>
            functions:
                I left this ambiguous for unerstanding purposes
                void print[FIRST 5, LAST5]
                void print[ALL OF ONE CHANCE]
                void print[ANYSORTFUNCTION]

    csv_reader.h
        description:    Honestly, I struggle with file reading, but I envision it being in its own file
            maybe along the lines of allowing us to do this

        main{
            basketball_teamvector list1 = csv_reader.basketballreader("FILENAME");

        }

    UI.h
        description: If we wanted a UI, I think it could be pretty easy if the team vector has good functions

    Overridding.h
        description: Okay I be wilin out but hear me out, I love doing this for my programs, and it makes debugging a dream

        //Overriding << Operator to cout << Baskteball_Team
        ostream & operator<<(ostream & out, const Basketball_Team & team);

        //Overriding << Operator to cout << yourChampionshipChance
        ostream & operator<<(ostream & out, const yourChampionshipChance & probableChance);

        //Overriding << Operator to cout << vector<Basketball_Team>
        ostream & operator<<(ostream & out, const vector<Basketball_Team> & teamlist);
*/

