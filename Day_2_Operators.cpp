#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) 
{ 
    double tip; 
    double tax;
    doule total;

    // Set to double for conversion from int
    double hundred = 100;

    tip =  meal_cost * ( tip_percent / hundred );
    tax =  meal_cost * ( tax_percent / hundred );

    total = meal_cost + tip + tax;

    cout << round(total);  
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}