/*
Title:Chapter 5 Exercise 11 - Population 
File name:Chapter5Ex11_Daniel_Geesaman.cpp
Programmer:Daniel Geesaman
Date:11/27/2024
Requirements:

Write a program that will predict the size of a population of organisms.

The program should ask the user for the starting number of organisms,

their average daily population increase (as a percentage),

and the number of days they will multiply. A loop should display the size of the population for each day.

Input Validation: Do not accept a number less than 2 for the starting size of the population.

Do not accept a negative number for average daily population increase.

Do not accept a number less than 1 for the number of days they will multiply.
*/

#include <iostream>
using namespace std;

int AmtOrganisms();
double AvgPopInc();
int NumDaysMult();
void calculationResult(int organisms, double percentIncrease, int numberOfDays);

int main()
{
    int organisms = AmtOrganisms();
    double percentIncrease = AvgPopInc();
    int numberOfDays = NumDaysMult();
    calculationResult(organisms, percentIncrease, numberOfDays);
}

int AmtOrganisms()
{
    int organisms;
    cout << "What is your number of organisms? (greater than 2) " << endl;
    cin >> organisms;
    while (organisms < 2)
    {
        cout << "Please enter a valid number." << endl << endl;
        cout << "What is your number of organisms? (greater than 2) " << endl;
        cin >> organisms;
    }
    return organisms;
}

double AvgPopInc()
{
    double percentIncrease;
    double percent;
    cout << "What is your average population increase per day? (percentage) " << endl;
    cin >> percentIncrease;
    while (percentIncrease < 0)
    {
        cout << "Please enter a valid number." << endl << endl;
        cout << "What is your average population increase per day? (percentage) " << endl;
        cin >> percentIncrease;
    }
    percent = (percentIncrease / 100) + 1;
    return percent;
}

int NumDaysMult()
{
    int numberOfDays;
    cout << "How many days will they multiply for? (over a day) " << endl;
    cin >> numberOfDays;
    while (numberOfDays < 1)
    {
        cout << "Please enter a valid number." << endl << endl;
        cout << "How many days will they multiply for? (over a day) " << endl;
        cin >> numberOfDays;
    }
    return numberOfDays;
}

void calculationResult(int organisms, double percentIncrease, int numberOfDays)
{
    for (int daycounter = 0; daycounter<numberOfDays; daycounter++)
    {
        organisms = (organisms * percentIncrease);
        cout << "The number of organisms on day " << daycounter + 1 << " is: " << organisms << endl;
    }
}
