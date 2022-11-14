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
            data: {GreatChance, GoodChance, LowChance, ExtremelyUnlikely, NA}
  
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

                Default Constructor [COMPLETED]
                Basketball_Team(); 
                    Make default stats
                    double = 0
                    string "N/A"
                    yourChapmionshipChance = "Extremely Unlikely" or we could make a new member to the list "N/A"


                Parameterize Constructor [**NEEDS WORK**]
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

                Getters [COMPLETED]

                Setters [**NEEDS WORK**]

                The following calculations can be placed within the Constructor allowing for the objects data to be completed on Instantiation
                double calculateWinrate(double gamesWon, double gamesPlayed); [**NEEDS WORK**]
                    description: calculate a winrate based on gamesplayed and gameswon
                    Pseudo:{
                        return gamesWon/gamesPlayed;
                    }

                double calculateWeightedScore(); [**NEEDS WORK**]
                    description: calculates a score from a base of 100 based on stats

                yourChampionshipChance calculateTeamsChances(); [**NEEDS WORK**]
                    description: given the weighted score, apply an appropriate probable chance

                void printChanceAtChampionship(); [**NEEDS WORK**]
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
                void addTeam(Basketball_Team team); [COMPLETED]
                void getTeam(string name);  [COMPLETED]
                double getTeamWin(string name); [**NEEDS WORK**]
                yourChampionshipChance getWinChance(string name); [**NEEDS WORK**]


    //Cumulative WinRate Given Multiple Years
    double calcWinRate(string name, vector<Basketball_Team> Year1, vector<Basketball_Team> year2, vector<Basketball_Team> year3){ [**NEEDS WORK**]
        Total = Year1.getTeamWin(name) + Year2.getTeamWin(name) + Year3.getTeamWin(name);
        return Total/3;
    }

    //Cumulative WinChance Given Multiple Years
    yourChampionshipChance calcCWinChance(string name, vector<Basketball_Team> Year1, vector<Basketball_Team> year2, vector<Basketball_Team> year3){ [**NEEDS WORK**]
        TotalOffencePoints  = Year1.getOffencePoints(name) + Year2.getOffencePoints(name) + Year3.getOffencePoints(name);
        TotalDefencePoints  = Year1.getDefencePoints(name) + Year2.getDefencePoints(name) + Year3.getDefencePoints(name);
        CWeightedScore = calculateWeightedScore(TotalOffencePoints, TotalDefencePoints);
        return calculateTeamsChances(CWeightedScore);
    }


    csv_reader.h [**NEEDS WORK**]
        description:    Honestly, I struggle with file reading, but I envision it being in its own file
            maybe along the lines of allowing us to do this

        main{
            basketball_teamvector list1 = csv_reader.basketballreader("FILENAME");
        }
        Pseudo?:
            for each line
                make a basketballteam(whatever was on the line)
                vector.add(basketballteam)
            
            return vector 

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

/*
Personal Milestones:

Milestone 1: A Completed Vector List of Basketball PLayers pulled from a CSV File of Data from a Single Year, and make multiple ones for multiple years. 

Milestone 1.2: Calculate Championship Win Chance based on Defense Points and Offence Points

Milestone 2: Given performance from a teams data, calculate cumulative Team Win Rates of the previous 3 years: 2021, 2020, 2019

Milestone 3: Have the Vectors of Basketball Teams fully filled in, and allow for a user to look at data

*/
