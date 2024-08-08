#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string InputStr[100];
    int Index = 0;

    while (true)
    {
        if (Index >= 100)
            break;

        getline(cin, InputStr[Index]);
        if (Index != 0)
        {
            if (InputStr[Index - 1] == "" && InputStr[Index] == "")
                break;
        }
        Index++;
    }

    for (int i = 0; i < Index; ++i)
    {
        if(InputStr[i] != "")
            cout << InputStr[i] << endl;
    }

    return 0;
}