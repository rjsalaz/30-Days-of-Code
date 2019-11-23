#include <bits/stdc++.h>
#include  <vector>
using namespace std;


int findCountOfOnes(int n)
{
    vector <int> arr; 
    int countOfOnes = 0; 
    int highestCount = 0;

    // Create binary array based off input
    while (n > 0)
    {
        if( n%2 == 0)
        {
            arr.push_back(0);
        }
        else
        {
            arr.push_back(1);

        }

        n = n / 2; 

    }

    // Finds the highest  amount of consecutive ones
    for(int i = arr.size(); i >= 0; i--)
    {
        if( arr[i] == 1)
        {
            countOfOnes++;
        }
        else
        {
           countOfOnes = 0; 
        }
       
        if( highestCount <= countOfOnes)
        {
            
          highestCount = countOfOnes;
    
        }
    }

    return highestCount;
}


int main()
{
   
    int n ;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    
    cout << findCountOfOnes(n);

    return 0;
}
