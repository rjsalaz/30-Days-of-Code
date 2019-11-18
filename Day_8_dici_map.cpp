#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    //create map and iterator 
    map<string,int> myMap; 
    map<string,int>::iterator it; 

    int     numOfEntries; 
    string  userName; 
    long    phoneNum; 

    // get user input 
    cin >> numOfEntries; 

    //insert key and value into map from input 
    for (int i = 0; i < numOfEntries ; i++)
    {
        cin >> userName >> phoneNum;

        myMap.insert(make_pair(userName,phoneNum)); 
    }

    // read in names for searching
    while( cin >> userName )
    {
        it = myMap.find(userName);

        if( it != myMap.end() )
        {
            cout << it->first << "=" << it->second << endl;
        }
        else
        {
            cout <<"Not found"<< endl;
        }
    }
    
    return 0;
}
