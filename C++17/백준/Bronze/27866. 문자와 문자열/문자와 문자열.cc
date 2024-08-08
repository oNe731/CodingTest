#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string str;
    cin >> str;

    int Number;
    cin >> Number;

    cout << str[Number - 1];

    return 0;
}