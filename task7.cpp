#include <iostream>

using namespace std;
string checkStudentStatus(int startingHour, int startingMinutes, int arrivalHour, int arrivalMinutes);

main()
{
  int startingHour, startingMinutes, arrivalHour, arrivalMinutes;
  cout << "Enter Exam Starting Time (hour): ";
  cin >> startingHour;
  cout << "Enter Exam Starting Time (minutes): ";
  cin >> startingMinutes;
  cout << "Enter Student hour of arrival: ";
  cin >> arrivalHour;
  cout << "Enter Student minutes of arrival: ";
  cin >> arrivalMinutes;

  cout << checkStudentStatus(startingHour, startingMinutes, arrivalHour, arrivalMinutes);
}

string checkStudentStatus(int startingHour, int startingMinutes, int arrivalHour, int arrivalMinutes)
{
  int  earlyTimeHour, lateTimeMinutes, lateTimeHour;
  int earlyTimeMinutes;
  int totalStartingTime = (startingHour * 60) + startingMinutes;
  int totalArrivalTime = (arrivalHour * 60) + arrivalMinutes;
  int test;
  string Status;
  if (totalStartingTime >= totalArrivalTime)
  {
    lateTimeHour = (totalStartingTime - totalArrivalTime) / 60;
    lateTimeMinutes = (totalStartingTime - totalArrivalTime) - (lateTimeHour * 60);
    Status = "Early";
    test = totalStartingTime - totalArrivalTime;
  }
  if (totalStartingTime < totalArrivalTime)
  {
    earlyTimeHour = (totalArrivalTime - totalStartingTime) / 60;
    earlyTimeMinutes = (totalArrivalTime - totalStartingTime) - (earlyTimeHour * 60);
    test = totalArrivalTime - totalStartingTime;
    Status = "Late";
  }
  cout<<earlyTimeMinutes;

  if (test = 0)
  {
    Status = "On time";
  }
  if (earlyTimeHour > 0)
  {

    return Status + "\n" + "Test: " + to_string(test) + "\n" + to_string(earlyTimeHour) + ":" + to_string(earlyTimeMinutes) + " hours before the start";
  }
  else
  {
    return Status + "\n" + "Test: " + to_string(test) + "\n" + to_string(earlyTimeMinutes) + " minutes before the start";
  }
}