#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(int i = 0; i < str.length(); ++i)
    {
        int number = str[i];
        if (number >= 65 && number <= 90) // 대문자 65,66 .. 90
            cout << char(str[i] + 32);
        else if (number >= 97 && number <= 122) // 소문자 97,98 .. 122
            cout << char(str[i] - 32);
    }
    
    return 0;
}