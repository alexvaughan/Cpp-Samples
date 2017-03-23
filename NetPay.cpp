#include <iostream>

using namespace std;

//Author: Alex Vaughan
//Date Modified: 03/02/2017
//program asks for a few values concerning employees based on their pay status
//program calculates pay per week for each status
//program also calculates tax on income
//tax rates differ depending on the gross amount earned

//main method
int main()
{

//sets output to 2 decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

//declaring variables and methods used in calculating net payments per week
    double grossHourlyEmp(double HourRate,double hoursWorked);
    double grossSalariedEmp(double gross);
    double grossContractedEmp(double contractAmount,int weeks);
    double rate;
    double hours;
    double contractRate;
    double salary;
    int contractWeeks;

    cout << "ALEX'S BIKE SHOP PAY BREAKDOWN"<<endl;

//prompts user to input salary for the year for employee 1
//stores value in double variable salary
    cout << "\n\nEnter salary amount for employee 1: $";
    cin >> salary;

//prompts user to input hourly rate and hours worked for employee 2
//stores values in double variable rate and double variable hours
    cout << "\nEnter hourly rate for employee 2: $";
    cin >> rate;
    cout << "Enter the amount of hours worked for employee 2: ";
    cin >> hours;

//prompts user to enter contract rate and weeks worked for employee 3
//stores values in double variable contractRate and int variable contractWeeks
    cout << "\nEnter the amount of contract for employee 3: $";
    cin >> contractRate;
    cout<< "Enter the number of weeks worked for employee 3: ";
    cin >> contractWeeks;

//output all values based on user input
//output uses methods that have been called
//output includes tax rates based on employee earnings per week
    cout<< "\nSalary per week for employee 1 is (tax included): $" << grossSalariedEmp(salary)<< endl;
    cout<< "Rate per week for employee 2 is (tax included): $" << grossHourlyEmp(rate,hours)<< endl;
    cout<< "Weekly rate for contractor employee 3 is (tax included): $" << grossContractedEmp(contractRate,contractWeeks)<< endl;
}

//grossSalariedEmp method
//calls for a double value
//calculates tax depending on which side of 3000 the earning is
double grossSalariedEmp(double gross)

{
    double gross1;
    double gross11;
    gross1 = (gross/52);

    if (gross1 > 3000)
    {
        gross11 = gross1 * .925;
    return gross11;
    }
    else
        return gross1 * .95;
}

//grossHourlyEmp method
//calls for 2 double values
//calculates earning per week with overtime included if employee exceeds 40 hours
//tax included in return value
double grossHourlyEmp(double hourRate,double hoursWorked)
{
    double gross2;
    double grossOt;
    if (hoursWorked > 40)
    {
    grossOt = (hourRate*1.5) * hoursWorked;
    return grossOt * .925;
    }
    else if (hoursWorked < 40)
    {
    gross2 = hourRate*hoursWorked;
    return gross2 * .925;
    }
}

//grossContractedEmp method
//calls for a double and an int value in order to calculate
//depending how much the employee makes the tax rates differ
// returns amount of the contract divided by the weeks worked
double grossContractedEmp(double contractAmount,int weeks)
{
    double gross3;
    double gross33;
    gross3 = contractAmount/weeks;
    if (gross3 > 3000)
    {
        gross33 = gross3 * .925;
        return gross33;
    }
    else
    return gross3 * .95;
}



