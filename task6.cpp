#include <iostream>

using namespace std;
string calculateHotelPrices(int stays, string month);

main()
{
    string month;
    int stays;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> stays;

    cout << calculateHotelPrices(stays, month);
}
string calculateHotelPrices(int stays, string month)
{
    float apartmentPrice, studioPrice, totalStudioPrice;
    if (month == "May" || month == "October")
    {
        apartmentPrice = stays * 65;
        if (stays <= 7)
        {

            studioPrice = stays * 50;
        }
        else if (stays > 7 && stays <= 14)
        {
            totalStudioPrice = stays * 50;
            studioPrice = totalStudioPrice - (totalStudioPrice * 0.05);
        }
        else if (stays > 14)
        {
            totalStudioPrice = stays * 50;
            studioPrice = totalStudioPrice - (totalStudioPrice * 0.3);
        }
    }

    else if (month == "June" || month == "September")
    {
        apartmentPrice = stays * 68.7;
        if (stays <= 14)
        {

            studioPrice = stays * 75.2;
        }
        else if (stays > 14)
        {
            totalStudioPrice = stays * 75.2;
            studioPrice = totalStudioPrice - (totalStudioPrice * 0.2);
        }
    }

    else if (month == "July" || month == "August")
    {
        apartmentPrice = stays * 77;
        studioPrice = stays * 76;
    }
    if (stays > 14)
    {
        apartmentPrice = apartmentPrice - (apartmentPrice * 0.1);
    }
    return "Apartment: " + to_string(apartmentPrice) + "$.\n" + "Studio: " + to_string(studioPrice) + "$.";
}
