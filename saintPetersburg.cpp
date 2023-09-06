#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <vector>
using namespace std;

/*
    This code is to simulate the outcome of Saint Petersburg paradox and give you the outcome per number
    of the trial you selected.
*/


int main()
{
    
    int trials;
    uint64_t money = 0;
    int status;
    vector <uint64_t> results;
    
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

    //Print the various amounts of money made per trial
    for(int i = 0; i < trials; i++)
    {
        cout << results[i] << ", ";
    }   
   
}
