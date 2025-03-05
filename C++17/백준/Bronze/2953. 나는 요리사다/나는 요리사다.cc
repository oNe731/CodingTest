#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Index = 0;
    int MaxNum = 0;
    for (size_t i = 0; i < 5; i++)
    {
        int AddNum = 0;
        for (size_t j = 0; j < 4; j++)
        {
            int Input;
            cin >> Input;
            AddNum += Input;
        }

        if (AddNum > MaxNum)
        {
            MaxNum = AddNum;
            Index = i;
        }
    }
    cout << Index + 1 << " " << MaxNum;
    return 0;
}
