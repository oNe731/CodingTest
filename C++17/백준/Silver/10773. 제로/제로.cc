#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int Count;
    cin >> Count;

    stack<int> Stacks;
    for (int i = 0; i < Count; ++i)
    {
        int Num;
        cin >> Num;

        if (Num == 0)
            Stacks.pop();
        else  
            Stacks.push(Num);
    }

    int Sum = 0;
    while (Stacks.empty() == false)
    {
        int Num = Stacks.top();
        Sum += Num;
        Stacks.pop();
    }
   
    cout << Sum << "\n";
    return 0;
}