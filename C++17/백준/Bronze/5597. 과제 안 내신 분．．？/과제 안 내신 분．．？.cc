#include <iostream>

using namespace std;

int main() 
{
    int Student[28] = {};
    for (size_t i = 0; i < 28; i++)
        cin >> Student[i];

    bool Homework[30] = { false };
    for (size_t i = 0; i < 28; i++)
        Homework[Student[i] - 1] = true;

    int NoneHomework[2] = {};
    for (size_t i = 0; i < 30; i++)
    {
        if (Homework[i] == false)
        {
            if (NoneHomework[0] == 0)
                NoneHomework[0] = i + 1;
            else if ((NoneHomework[1] == 0))
                NoneHomework[1] = i + 1;
        }
    }

    if (NoneHomework[0] < NoneHomework[1])
        cout << NoneHomework[0] << " " << NoneHomework[1];
    else
        cout << NoneHomework[1] << " " << NoneHomework[0];

    return 0;
}