#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{
    string String1;
    string String2;

    cin >> String1;
    cin >> String2;

    reverse(String1.begin(), String1.end());
    reverse(String2.begin(), String2.end());

    int Number1 = stoi(String1); // stod => double 타입, stoll => long long 타입
    int Number2 = stoi(String2);

    string Result;
    if (Number1 > Number2)
        Result = to_string(Number1);
    else
        Result = to_string(Number2);

    cout << Result << endl;

    return 0;
}