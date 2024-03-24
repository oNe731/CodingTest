#include <iostream>

using namespace std;

int main() 
{
    int Cost, Count;
    cin >> Cost >> Count;

    int AddCost = 0;
    for (size_t i = 0; i < Count; i++)
    {
        int Costs, Counts;
        cin >> Costs >> Counts;

        AddCost += Costs * Counts;
    }
    
    if (Cost == AddCost)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}