#include <bits/stdc++.h>
using namespace std;

vector<string> split_string(string);

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }



    for(int j = arr.size() -1 ; j >= 0; j--)
    {
        cout << arr[j] << " "; 
    }


    return 0;
}
