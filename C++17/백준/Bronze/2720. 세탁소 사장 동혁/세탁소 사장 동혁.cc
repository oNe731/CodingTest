#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int InputCount;
    cin >> InputCount;

    std::vector<int> Quarters, Dimes, Nickels, Pennys;
    int Quarter, Dime, Nickel, Penny;
    for (int i = 0; i < InputCount; ++i)
    {
        int Money;
        cin >> Money;

        Quarter = Money / 25;
        Money -= Quarter * 25;
        Quarters.push_back(Quarter);

        Dime = Money / 10;
        Money -= Dime * 10;
        Dimes.push_back(Dime);

        Nickel = Money / 5;
        Money -= Nickel * 5;
        Nickels.push_back(Nickel);

        Penny = Money / 1;
        Money -= Penny * 1;
        Pennys.push_back(Penny);
    }

    for (int i = 0; i < InputCount; ++i)
    {
        cout << Quarters[i] << " " << Dimes[i] << " " << Nickels[i] << " " << Pennys[i] << "\n";
    }

    return 0;
}