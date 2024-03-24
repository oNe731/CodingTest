#include <iostream>

using namespace std;

int main() 
{
    int Count;
    cin >> Count;

    int Num = Count / 4;
    for (size_t i = 0; i < Num; i++)
        cout << "long ";
    cout << "int" << endl;

    return 0;
}