#include <iostream>
using namespace std;
//Author: Alex Vaughan
//Date Modified: 03/20/2017
//program uses arrays to store pounds eaten per day by 3 monkeys
//program prompts user to input the values for each day
//program will output the total pounds, average pounds, lowest, and highest amount eaten by each individual monkey
//as well as outputting the same values as a whole family

    int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

//declaring a constant array
//creating an array for the days of the week
    const int DAYS_WEEK_MINNIE = 7;
    double poundsMinnie[DAYS_WEEK_MINNIE];
    char week[DAYS_WEEK_MINNIE] = {'M','T','W','T','F','S','S'};

//prompting user for input values of the first monkey
//stores the values in the array
    cout<< "Enter the amount of food eaten each day in pounds by Minnie for each day of the week: " << endl;
    cin >> poundsMinnie[0];
    cin >> poundsMinnie[1];
    cin >> poundsMinnie[2];
    cin >> poundsMinnie[3];
    cin >> poundsMinnie[4];
    cin >> poundsMinnie[5];
    cin >> poundsMinnie[6];

//storing the total amount of food per week in totalMinnie
    double totalMinnie = 0;

        for (int count = 0; count < DAYS_WEEK_MINNIE; count++)
            totalMinnie += poundsMinnie[count];

//storing the average per day for the week in averageMinnie
    double total = 0;
    double averageMinnie;

        for (int count = 0; count < DAYS_WEEK_MINNIE; count++)
            total += poundsMinnie[count];
            averageMinnie = total / DAYS_WEEK_MINNIE;

//deciding on the highest amount of food eaten
    int count;
    double highestMinnie;
    highestMinnie = poundsMinnie[0];

        for (count = 1; count < DAYS_WEEK_MINNIE; count++)
        {
            if (poundsMinnie[count] > highestMinnie)
            highestMinnie = poundsMinnie[count];
        }

//deciding on the lowest amount of food eaten
    double lowestMinnie;
    lowestMinnie = poundsMinnie[0];

        for (count = 1; count < DAYS_WEEK_MINNIE; count++)
        {
            if (poundsMinnie[count] < lowestMinnie)
            lowestMinnie = poundsMinnie[count];
        }

//outputting the total, average, highest, and lowest amount of food eaten by Minnie
    cout <<"\nThe total pounds eaten by Minnie is: "<< totalMinnie << " lbs";
    cout <<"\nThe average per day for Minnie is: " << averageMinnie << " lbs";
    cout <<"\nThe highest amount of food eaten by Minnie is: " << highestMinnie << " lbs";
    cout <<"\nThe lowest amount of food eaten by Minnie is: " << lowestMinnie << " lbs";

//declaring another constant array
    const int DAYS_WEEK_TANNER = 7;
    double poundsTanner[DAYS_WEEK_TANNER];

//prompting the user for values of each day of the week for Tanner
    cout<< "\n\nEnter the amount of food eaten each day in pounds by Tanner for each day of the week: " << endl;
    cin >> poundsTanner[0];
    cin >> poundsTanner[1];
    cin >> poundsTanner[2];
    cin >> poundsTanner[3];
    cin >> poundsTanner[4];
    cin >> poundsTanner[5];
    cin >> poundsTanner[6];

//calculating total for Tanner
    double totalTanner = 0;

        for (int count = 0; count < DAYS_WEEK_TANNER; count++)
        totalTanner += poundsTanner[count];

//calculating average for Tanner
    double total2 = 0;
    double averageTanner;

        for (int count = 0; count < DAYS_WEEK_TANNER; count++)
        total2 += poundsTanner[count];
        averageTanner = total2 / DAYS_WEEK_TANNER;

//calculating the highest amount for Tanner
    double highestTanner;
    highestTanner = poundsTanner[0];

        for (count = 1; count < DAYS_WEEK_TANNER; count++)
        {
            if (poundsTanner[count] > highestTanner)
            highestTanner = poundsTanner[count];
        }

//calculating the lowest amount for Tanner
    double lowestTanner;
    lowestTanner = poundsTanner[0];

        for (count = 1; count < DAYS_WEEK_TANNER; count++)
        {
            if (poundsTanner[count] < lowestTanner)
            lowestTanner = poundsTanner[count];
        }

//outputting the total, average, highest, and lowest values for Tanner
    cout <<"\nThe total pounds eaten by Minnie is: "<< totalTanner << " lbs";
    cout <<"\nThe average per day for Minnie is: " << averageTanner << " lbs";
    cout <<"\nThe highest amount of food eaten by Minnie is: " << highestTanner << " lbs";
    cout <<"\nThe lowest amount of food eaten by Minnie is: " << lowestTanner << " lbs";

//declaring the final constant array for Fluffy
    const int DAYS_WEEK_FLUFFY = 7;
    double poundsFluffy[DAYS_WEEK_FLUFFY];

//prompts user to input the values for Fluffy
    cout<< "\n\nEnter the amount of food eaten each day in pounds by Fluffy for each day of the week: " << endl;
    cin >> poundsFluffy[0];
    cin >> poundsFluffy[1];
    cin >> poundsFluffy[2];
    cin >> poundsFluffy[3];
    cin >> poundsFluffy[4];
    cin >> poundsFluffy[5];
    cin >> poundsFluffy[6];

//calculating the total for Fluffy
    double totalFluffy = 0;

        for (int count = 0; count < DAYS_WEEK_FLUFFY; count++)
        totalFluffy += poundsFluffy[count];

//calculating the average
    double total3 = 0;
    double averageFluffy;

        for (int count = 0; count < DAYS_WEEK_FLUFFY; count++)
        total3 += poundsFluffy[count];
        averageFluffy = total3 / DAYS_WEEK_FLUFFY;

//calculating the highest value for Fluffy
    double highestFluffy;
    highestFluffy = poundsFluffy[0];

        for (count = 1; count < DAYS_WEEK_FLUFFY; count++)
        {
            if (poundsFluffy[count] > highestFluffy)
            highestFluffy = poundsFluffy[count];
        }

//calculating the lowest value for Fluffy
    double lowestFluffy;
    lowestFluffy = poundsFluffy[0];

        for (count = 1; count < DAYS_WEEK_FLUFFY; count++)
        {
            if (poundsFluffy[count] < lowestFluffy)
            lowestFluffy = poundsFluffy[count];
        }

//outputting the total, average, highest, and lowest values for Fluffy
    cout <<"\nThe total pounds eaten by Minnie is: "<< totalFluffy << " lbs";
    cout <<"\nThe average per day for Minnie is: " << averageFluffy << " lbs";
    cout <<"\nThe highest amount of food eaten by Minnie is: " << highestFluffy << " lbs";
    cout <<"\nThe lowest amount of food eaten by Minnie is: " << lowestFluffy << " lbs";

    cout <<"\n\n\t"<< "Minnie" << "\t\t"  << "Tanner" << "\t\t" << "Fluffy\n";
    cout <<"\t"<< "------" << "\t\t" <<  "------" << "\t\t" << "------";

//outputting the values for each monkey in a database form
        for (int count = 0; count < DAYS_WEEK_MINNIE; count++)
        {
            cout << "\n"<<week[count]<<"\t";
            cout << poundsMinnie[count] << " lbs\t";
            cout << poundsTanner[count] <<" lbs\t";
            cout << poundsFluffy[count] << " lbs\t";
        }

//calculating and storing the average of all the monkeys for the week
    double averageFamily;
    averageFamily = (averageMinnie + averageFluffy + averageTanner) / 3;

    cout << "\n\nThe average amount eaten by the whole family is: " << averageFamily << " lbs";

//calculating and storing the lowest value of all the monkeys for the week
        if (lowestFluffy < lowestMinnie && lowestFluffy < lowestTanner)
        {
            cout <<"\nThe lowest amount of food eaten this week was: " << lowestFluffy << " lbs";
        }
            else if (lowestMinnie < lowestFluffy && lowestMinnie < lowestTanner)
            {
                cout <<"\nThe lowest amount of food eaten this week was: " << lowestMinnie << " lbs";
            }
                else
                {
                    cout <<"\nThe lowest amount of food eaten this week was: " << lowestTanner << " lbs";
                }

//calculating and storing the highest value of all the monkeys for the week
        if(highestFluffy > highestMinnie && highestFluffy > highestTanner)
        {
            cout <<"\nThe highest amount of food eaten this week was: " << highestFluffy << " lbs";
        }
            else if (highestMinnie > highestFluffy && highestMinnie > highestTanner)
            {
                cout <<"\nThe highest amount of food eaten this week was: " << highestMinnie << " lbs";
            }
                else
                {
                    cout <<"\nThe highest amount of food eaten this week was: " << highestTanner << " lbs";
                }

return 0;
}
