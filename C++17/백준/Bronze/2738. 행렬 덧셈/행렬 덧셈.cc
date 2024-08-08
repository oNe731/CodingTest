#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int count[2];
    cin >> count[0] >> count[1];

    vector<vector<int>> number1;
    for (int i = 0; i < count[0]; ++i)
    {
        number1.push_back(vector<int>());
        for (int j = 0; j < count[1]; ++j)
        {
            int input;
            cin >> input;
            number1[i].push_back(input);
        }
    }
    vector<vector<int>> number2;
    for (int i = 0; i < count[0]; ++i)
    {
        number2.push_back(vector<int>());
        for (int j = 0; j < count[1]; ++j)
        {
            int input;
            cin >> input;
            number2[i].push_back(input);
        }
    }

    for (int i = 0; i < count[0]; ++i)
    {
        for (int j = 0; j < count[1]; ++j)
        {
            cout << number1[i][j] + number2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}