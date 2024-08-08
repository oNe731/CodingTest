#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string Str;
    getline(cin, Str); // 공백 문자열 입력 가능

    int Count = 0;
    bool IsStart = false;

    for (size_t i = 0; i < Str.length(); i++)
    {
        if (Str[i] != ' ' && !IsStart)
        {
            IsStart = true;
            Count++;
        }
        else if (Str[i] == ' ' && IsStart)
        {
            IsStart = false;
        }
    }

    cout << Count << endl;

    return 0;
}