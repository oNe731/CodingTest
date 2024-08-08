#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;

    int count = 0;
    for (int i = 0; i < input.length(); ++i)
    {
        if (input[i] == 'c')
        {
            if (i + 1 < input.length() && (input[i + 1] == '=' || input[i + 1] == '-'))
                i++;
        }
        else if (input[i] == 'd')
        {
            if (i + 1 < input.length() && input[i + 1] == '-')
                i++;
            else if (i + 2 < input.length() && input[i + 1] == 'z' && input[i + 2] == '=')
                i += 2;
        }
        else if (input[i] == 'l' || input[i] == 'n')
        {
            if (i + 1 < input.length() && input[i + 1] == 'j')
                i++;
        }
        else if (input[i] == 's' || input[i] == 'z')
        {
            if (i + 1 < input.length() && input[i + 1] == '=')
                i++;
        }
        count++;
    }

    cout << count << endl;

    return 0;
}