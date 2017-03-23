#include <iostream>
#include <stdlib.h>

//Author: Alex Vaughan
//Date Modified: 02/21/2017
//program will prompt user to enter 5 ratings from 1-10
//program will generate an average of the entries
//program will also output least and greatest entries


using namespace std;

//declaration of methods
void average (double, double, double, double, double);
void least(int leastA,int leastB, int leastC, int leastD, int leastE);
void greatest(int greatA,int greatB,int greatC,int greatD, int greatE);
void wrongEntryA(int wrongA);
void wrongEntryB(int wrongB);
void wrongEntryC(int wrongC);
void wrongEntryD(int wrongD);
void wrongEntryE(int wrongE);

//main class
int main()
{

//initializing some variables
    double firstRate;
    double secondRate;
    double thirdRate;
    double fourthRate;
    double fifthRate;

//title of the program
    cout<< "Product rating portal!\nOn a scale from 1-10\n\n"<<endl;

//5 prompts to ask user to enter ratings
//will end program if the entry is above 10 through a method call
    cout << "What is the first rating? " << endl;
    cin >> firstRate;
    wrongEntryA(firstRate);
    cout << "What is the second rating?" << endl;
    cin >> secondRate;
    wrongEntryB(secondRate);
    cout << "What is the third rating?" << endl;
    cin >> thirdRate;
    wrongEntryC(thirdRate);
    cout << "What is the fourth rating?" << endl;
    cin >> fourthRate;
    wrongEntryD(fourthRate);
    cout << "What is the fifth rating?" << endl;
    cin >> fifthRate;
    wrongEntryE(fifthRate);

//method calls once data is stored
    average(firstRate,secondRate,thirdRate,fourthRate,fifthRate);
    least(firstRate,secondRate,thirdRate,fourthRate,fifthRate);
    greatest(firstRate,secondRate,thirdRate,fourthRate,fifthRate);
}

//averaging method
//performs calculations to obtain the average
void average(double averageA, double averageB, double averageC, double averageD, double averageE)
{
    double value;
    value = (averageA + averageB + averageC + averageD + averageE) / 5;
    cout <<"The average value is: "<< value<<endl;
}

//least method
//this method will calculate the smallest entry
//this method will also output the smallest entry
void least(int leastA,int leastB,int leastC,int leastD, int leastE)
{
        if ((leastA < leastB) and (leastA<leastC) and (leastA<leastD) and (leastA<leastE))
    {
        cout << "Least: "<< leastA<<endl;
    }
else

        if ((leastB< leastA)and (leastB<leastC) and (leastB<leastD) and (leastB<leastE))
    {
        cout << "Least: "<< leastB<<endl;
    }
else

        if ((leastC <leastA) and (leastC<leastB) and (leastC<leastD) and (leastC<leastE))
    {
        cout << "Least: "<< leastC<<endl;
    }

else
        if ((leastD<leastA) and (leastD<leastB) and (leastD<leastC) and (leastD<leastE))
    {
        cout << "Least: "<< leastD<<endl;
    }

else
        if ((leastE<leastA) and (leastE<leastB) and (leastE<leastC) and (leastE<leastD))
    {
        cout << "Least: "<< leastE<<endl;
    }
}

//greatest method
//this method generates the largest number entered
//it will also output the greatest amount
void greatest(int greatA,int greatB,int greatC,int greatD, int greatE)

{
        if ((greatA > greatB) and (greatA>greatC) and (greatA>greatD) and (greatA>greatE))
    {
        cout << "Greatest: "<< greatA<<endl;
    }
else

        if ((greatB > greatA)and (greatB>greatC) and (greatB>greatD) and (greatB>greatE))
    {
        cout << "Greatest: "<< greatB<<endl;
    }
else

        if ((greatC >greatA) and (greatC>greatB) and (greatC>greatD) and (greatC>greatE))
    {
        cout << "Greatest: "<< greatC<<endl;
    }

else
        if ((greatD>greatA) and (greatD>greatB) and (greatD>greatC) and (greatD>greatE))
    {
        cout << "Greatest: "<< greatD<<endl;
    }

else
        if ((greatE>greatA) and (greatE>greatB) and (greatE>greatC) and (greatE>greatD))
    {
        cout << "Greatest: "<< greatE<<endl;
    }
}

//wrongEntry methods
//this method terminates the program if the user enters anything above 10 as a rating
//each method is the same with the exception of the variable it is working with
void wrongEntryA(int wrongA)
{
        if (wrongA>10)
    {
        cout<<"Error: Rating is on a scale from 1-10! Please try again!"<< endl;
        exit(0);
    }
}

void wrongEntryB(int wrongB)
{
        if (wrongB>10)
    {
        cout<<"Error: Rating is on a scale from 1-10! Please try again!"<< endl;
        exit(0);
    }
}

void wrongEntryC(int wrongC)
{
        if (wrongC>10)
    {
        cout<<"Error: Rating is on a scale from 1-10! Please try again!"<< endl;
        exit(0);
    }
}

void wrongEntryD(int wrongD)
{
        if (wrongD>10)
    {
        cout<<"Error: Rating is on a scale from 1-10! Please try again!"<< endl;
        exit(0);
    }
}

void wrongEntryE(int wrongE)
{
        if (wrongE>10)
    {
        cout<<"Error: Rating is on a scale from 1-10! Please try again!"<< endl;
        exit(0);
    }
}






