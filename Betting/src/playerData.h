#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::vector;

struct Player{
    string firstName;
    string lastName;
    string currentTeam;
    int minutes;
    int assists;
    //int turnovers;
    int fgm; //mix of 2ptrs and 3ptrs
    double fgPct;
    double ftPct;
    int offenseRating;
    float trueShootingPct;
    float points;
};