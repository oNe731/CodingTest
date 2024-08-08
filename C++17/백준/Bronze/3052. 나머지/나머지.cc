#include <iostream>

using namespace std;

int main() 
{
    int Remain[10]  = {};
    int Numbers[10] = {};
    for (size_t i = 0; i < 10; i++)
    {
        int Number;
        cin >> Number;

        Remain[i] = Number % 42;
        Numbers[i] = -1;
    }
    
    int Count = 0;
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            if (i != j)
            {
                bool Same = false;
                for (size_t k = 0; k < 10; k++)
                {
                    if (Remain[i] == Numbers[k])
                        Same = true;
                }

                if(Same == false)
                    Numbers[Count++] = Remain[i];
            }
        }
    }

    cout << Count << endl;

    return 0;
}