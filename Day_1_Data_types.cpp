    #include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int myNum;
    double myDouble; 
    string myString;


    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> myNum; 
    cin >> myDouble; 
    getline(cin >> ws, myString); 

    
    // Print the sum of both integer variables on a new line.
    cout << i + myNum << endl; 

    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << + d + myDouble << endl; 
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    cout << s + myString <<endl; 

    return 0;
}