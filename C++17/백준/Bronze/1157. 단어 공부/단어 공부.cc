#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string str;
    cin >> str;

    int count[26] = {};
    for (int i = 0; i < str.length(); ++i)
    {
        int number = str[i];
        if (number >= 65 && number <= 90) // 대문자 65,66 .. 90
            count[number - 65]++;
        else if (number >= 97 && number <= 122) // 소문자 97,98 .. 122
            count[number - 97]++;
    }

    int maxIndex = -1;
    int maxCount = -1;
    for (int i = 0; i < 26; ++i)
    {
        if (count[i] > maxCount)
        {
            maxIndex = i;
            maxCount = count[i];
        }
    }

    bool result = false;
    for (int i = 0; i < 26; ++i)
    {
        if (i == maxIndex)
            continue;

        if (count[i] == maxCount)
        {
            result = true;
            cout << "?";
            break;
        }
    }

    if(result == false)
        cout << (char)(maxIndex + 65);

    return 0;
}