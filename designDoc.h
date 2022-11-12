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

