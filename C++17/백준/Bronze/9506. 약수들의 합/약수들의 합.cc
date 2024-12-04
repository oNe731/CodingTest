#include <iostream>
#include <vector>

using namespace std;

int main(void) {

    while (true)
    {
        int Number;
        cin >> Number;
        if (Number == -1)
            break;

        std::vector<int> numbers;
        int AddNumber = 0;
        for (int i = 1; i < Number; ++i)
        {
            if (Number % i == 0)
            {
                AddNumber += i;
                numbers.push_back(i);
            }
        }

        if(AddNumber != Number)
            cout << Number << " is NOT perfect." << "\n";
        else
        {
            cout << Number << " = ";
            for (int i = 0; i < numbers.size(); ++i)
            {
                cout << numbers[i];
                if (i + 1 >= numbers.size())
                    cout << "\n";
                else
                    cout << " + ";
            }
        }
    }

    return 0;
}