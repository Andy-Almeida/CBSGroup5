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
            data: {GreatChance, GoodChance, LowChance, ExtremelyUnlikely, NA (which is rare)}
  
        class Basketball_Team
            description: a class that would represent a basketball team.
                            a basketball team would have a team name, the conferenece that the team plays for, and performance statistics for the season.
                            calculations are included to help provide more data on topics such as WinRates and Probabilty of Championship Win.
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


                Parameterize Constructor [COMPLETE]
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

                double calculateWinrate(double gamesWon, double gamesPlayed); [COMPLETE]
                    description: calculate a winrate based on gamesplayed and gameswon and return as a percentage/100

                double calculateWeightedScore(); [COMPLETE]
                    description: calculates a score from a base of 100 based on stats

                yourChampionshipChance calculateTeamsChances(); [COMPLETE]
                    description: given the weighted score, apply an appropriate probable chance

                string toStr_yourChampionshipChance( yourChampionshipChance chance ); [COMPLETE] 
                    description: print the teams winChance

                Getters [COMPLETED]

                Setters [COMPLETE]

    basketball_teamvector.h
        description: contains a class that will store the vector of basketball_teams along with usable functions
        class BasketballTeamVector
            data: 
                vector<Basketball_Team> teamlist -> A list of all of the teams
                vector<Basketball_Team> year2019 -> A list of the teams stats from 2019
                vector<Basketball_Team> year2020 -> A list of the teams stats from 2020
                vector<Basketball_Team> year2021 -> A list of the teams stats from 2021
            functions:
                Default Constructor [COMPLETED]
                BasketballTeamVector(); 
                    Make default stats
                        
                void addTeam(Basketball_Team team); [COMPLETED]
                    description: Adds team to the list

                double calcTotalWinrate(string teamname);
                    description: Calculates total winrate over 2019, 2020, 2021

                double calcTotalWeighted(string teamName); 
                    description: Calculates total weighted score over 2019, 2020, 2021

                Basketball_Team getTeam(string name, int year);  [COMPLETED]
                    description: Get team from the list using thier name and year

                void printTop5(Basketball_Team team);
                    description:
                
                bool checkName(string nameCheck);
                    description: checks if the name if the school is in the list

                void setYear2019();
                void setYear2020();
                void setYear2021();
                    description: this function will set the vector with basketball team objects using cbb19.csv and cbb20.csv and cbb21.csv

                void printData(string teamName);
                    description: print function: cumulative winrate, conference, weighted score, Chance at championship

    basketball_Main.cpp
        description: This is the main page for our work.

    unittests.h
        description: This is an area to test code.

Personal Milestones:

Milestone 1: A Completed Vector List of Basketball PLayers pulled from a CSV File of Data from a Single Year, and make multiple ones for multiple years. [COMPLETE]

Milestone 1.2: Calculate Championship Win Chance based on Defense Points and Offence Points[COMPLETE]

Milestone 2: Given performance from a teams data, calculate cumulative Team Win Rates of the previous 3 years: 2021, 2020, 2019[COMPLETE]

Milestone 3: Have the Vectors of Basketball Teams fully filled in, and allow for a user to look at data

*/
