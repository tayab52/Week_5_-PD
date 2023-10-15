#include <iostream>

using namespace std;
float calculatePercentage(int englishMarks, int mathMarks, int chemistryMarks, int socialSciencesMarks, int biologyMarks);
string calculateGrade(float percentage);

main()
{
    string name;
    int englishMarks, mathMarks, chemistryMarks, socialSciencesMarks, biologyMarks;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> englishMarks;
    cout << "Enter marks for Math: ";
    cin >> mathMarks;
    cout << "Enter marks for Chemistry: ";
    cin >> chemistryMarks;
    cout << "Enter marks for Social Science: ";
    cin >> socialSciencesMarks;
    cout << "Enter marks for Biology: ";
    cin >> biologyMarks;

    float percentage = calculatePercentage(englishMarks, mathMarks, chemistryMarks, socialSciencesMarks, biologyMarks);
    string grade = calculateGrade(percentage);
    cout<<"Student name: "<<name<<endl;
    cout << "Percentage: " << percentage << "%"<<endl;
    cout <<"Grade: "<<grade;
}

float calculatePercentage(int englishMarks, int mathMarks, int chemistryMarks, int socialSciencesMarks, int biologyMarks)
{
    float totalAttained = englishMarks + mathMarks + biologyMarks + socialSciencesMarks + chemistryMarks;
    // cout<< totalAttained;
    float Percentage = (totalAttained / 500) * 100;
    // cout<< Percentage;
    return Percentage;
}

string calculateGrade(float percentage)
{
    string Grade;
    if (percentage >= 90 && percentage <= 100)
    {

        Grade = "A+";
    }
    else if (percentage < 90 && percentage >= 80)
    {
        Grade = "A";
    }
    else if (percentage < 80 && percentage >= 70)
    {
        Grade = "B+";
    }
    else if (percentage < 70 && percentage >= 60)
    {
        Grade = "B";
    }
    else if (percentage < 60 && percentage >= 50)
    {
        Grade = "C";
    }
    else if (percentage < 50 && percentage >= 40)
    {
        Grade = "D";
    }
    else if (percentage < 40)
    {
        Grade = "F";
    }
    return Grade;
}
