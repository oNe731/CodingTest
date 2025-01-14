#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int Number = 2;
    while (N != 1)
    {
        if (N % Number == 0)
        {
            N /= Number;
            cout << Number << "\n";
        }
        else
            Number++;
    }
  
    return 0;
}