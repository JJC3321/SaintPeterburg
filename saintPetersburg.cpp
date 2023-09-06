#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <vector>
using namespace std;

/*
    This code is to simulate the outcome of Saint Peterburge game and give you outcome per number
    of trial you seltected.
*/


int main()
{
    
    int trials;
    int money = 0;
    int status;
    vector <int> results;
    float average = 0;

    cout << "Enter Number of Trials " << endl;
    cin >> trials;
   
    // Simualte randomness in accordance of time
    srand (time(NULL)); 

    // Run the game and record the amount of money made
    for(int i = 0; i < trials; i++)
    {
        do
        {
            status = rand() % 2;
            if(money == 0)
            {
                money = money + 2;
                status = rand()  % 2;
            }
            else
            {
                money = money * 2;
                status = rand() % 2; 
            }
        }while(status == 1);
        results.push_back(money); 
    }
    
    // Calualted the amount of money made
    for(int i = 0; i < trials; i++)
    {
        average += results[i];
    } 
    average = average / trials;

    //Print the various amount of money made per trials
    for(int i = 0; i < trials; i++)
    {
        cout << results[i] << ", ";
    }   
    
    // Print out the average of amount of money made for all trials
    cout << endl;
    cout << average; 
}