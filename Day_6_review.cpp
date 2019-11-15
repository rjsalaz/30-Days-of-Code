#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numOfTest; 
    string inputString; 
    

    cin >> numOfTest; 
    
    for(int i = 0; i < numOfTest; i++)
    {
        // Get string and store in char array 
         cin >> inputString; 
         
     
        for(int j = 0; j < inputString.length(); j++)
        {
            if( j%2 == 0 )
            {
                cout << inputString[j];
            }

        }


                cout << " "; 

       for(int j = 0; j < inputString.length(); j++)
        {
            if( j%2 == 1  )
            { 
                cout << inputString[j];
            }

        }

                cout << endl; 



    }

    return 0;
}