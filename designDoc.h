/*
Everything in this file is commented!!

Group Members: Andy Almeida, Kao Saephan, Nicholas Valencia, Umaran Ahmadzai, Shanil Prasad


What this whole program does: This need revising
    Main function:
        1) read in files from 2021, 2020, and 2019 to obtain the team names, games won, games played. 
        2) Creates a basketball_team class that will store the team names, games won, games played
        3) Calculates the win rate of these teams and store it in basketball_team 
        4) Creates a team_strengths class that calculates the weighted score then team's chances and 
            stores the string version of the chance in basketball_team
        5) Creates a vector<basketball_team> that stores basketball_team objects
        6) Call printStatistics() to print out a team's teamName, weightedScore, winRate, thisTeamsChances.

    basketball_team.h
        enum class yourChampionshipChance
            description: a class that contains four labels correlating to levels of chance to win a championship
            data: {GreatChance, GoodChance, LowChance, ExtremelyUnlikely }
  
        class Basketball_Team
            description: a class that will allow for data allocation for each team
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
                Default Constructor
                Basketball_Team(); 
                    Make default stats
                    double = 0
                    string "N/A"
                    yourChapmionshipChance = "Extremely Unlikely" or we could make a new member to the list "N/A"


                Parameterize Constructor
                Basketball_Team(string name, string conference, gamesWon, gamesPlayed, offensePoints, defensePoints){
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

                The following calculations can be placed within the Constructor allowing for the objects data to be completed on Instantiation
                double calculateWinrate(double gamesWon, double gamesPlayed);
                    description: calculate a winrate based on gamesplayed and gameswon
                    Pseudo:{
                        return gamesWon/gamesPlayed;
                    }

                double calculateWeightedScore();
                    description: calculates a score from a base of 100 based on stats

                yourChampionshipChance calculateTeamsChances(); 
                    description: given the weighted score, apply an appropriate probable chance

                void printChanceAtChampionship();
                    I personally believe we should make getters, but I prefer overriding <<
                    Pseduo: {
                        return probableChance //this is possible with overriding!
                    }

    basketball_teamvector.h
        description: contains a class that will store the vector of basketball_teams along with potential functions
        class Team_Vector
            data: 
                vector<Basketball_Team>
            functions:
                I left this ambiguous for unerstanding purposes
                void addTeam(Basketball_Team team);
                void getTeam(string name);
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

    Unittests.h
        //An area for unit testing and building our program.

    For the headers, I might be doing too much with this many files, but a file for header files could be good too!
*/

