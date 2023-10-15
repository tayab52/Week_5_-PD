#include <iostream>

using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int travelingWeekends);

main()
{
    string yearType;
    int holidays, travelingWeekends;

    cout << "Enter year type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> travelingWeekends;

    cout << calculateVolleyballGames(yearType, holidays, travelingWeekends);
}
int calculateVolleyballGames(string yearType, int holidays, int travelingWeekends)
{

    float playingWeekends = (0.75 * (48 - travelingWeekends)) + travelingWeekends;

    float playingHolidays = holidays * (0.66667);

    float totalPlayingTime = playingWeekends + playingHolidays;

    if (yearType == "leap")
    {

        float increment = totalPlayingTime * 0.15;
    return totalPlayingTime = totalPlayingTime + increment;
    
    }
    else if(yearType=="normal"){

    return totalPlayingTime;
    }
}
