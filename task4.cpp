#include <iostream>

using namespace std;
float serviceCharges(char serviceCode, int time, int minutes);

main()
{
    char serviceCode, time;
    int minutes;
    float callCharges;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;
    if (serviceCode == 'P' || serviceCode == 'p')
    {
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
    }
    cout << "Enter the number of minutes used: ";
    cin >> minutes;
    callCharges = serviceCharges(serviceCode, time, minutes);
    if (serviceCode == 'P' || serviceCode == 'p')
    {
        cout << "Service Type: Premium" << endl;
    }
    if (serviceCode == 'R' || serviceCode == 'r')
    {
        cout << "Service Type: Regular" << endl;
    }
    cout << "Total Minutes Used: " << minutes << endl;
    cout << "Amount Due: $" << callCharges << endl;
}

float serviceCharges(char serviceCode, int time, int minutes)

{
    float serviceCharges;
    if (serviceCode == 'R' || serviceCode == 'r')
    {
        if (minutes <= 50)
        {
            serviceCharges = 10;
        }
        if (minutes > 50)
        {
            int extraTime = minutes - 50;
            serviceCharges = 10 + (extraTime * 0.2);
        }
    }
    if (serviceCode == 'P' || serviceCode == 'p')
    {
        if (time == 'N' || time == 'n')
        {
            if (minutes <= 100)
            {
                serviceCharges = 25;
            }
            if (minutes > 100)
            {
                int extraTime = minutes - 100;
                serviceCharges = 25 + (extraTime * 0.05);
            }
        }
        else if (time == 'D' || time == 'd')
        {
            if (minutes <= 75)
            {
                serviceCharges = 25;
            }
            if (minutes > 75)
            {
                int extraTime = minutes - 75;
                serviceCharges = 25 + (extraTime * 0.1);
            }
        }
    }
    return serviceCharges;
}
