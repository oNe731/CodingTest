#include <iostream>

using namespace std;

int main()
{
    int ConfettiCount, Allextent = 0;
    cin >> ConfettiCount;

    int pixelUse[100][100] = { 0 };
    for (size_t i = 0; i < ConfettiCount; i++) {
        int Left, Down;
        cin >> Left >> Down;
        for (size_t j = Left; j < Left + 10; j++) {
            for (size_t k = Down; k < Down + 10; k++) {
                if (pixelUse[j][k] == 0) {
                    pixelUse[j][k] = 1;
                    Allextent++;
                }
            }   
        }
    }

    cout << Allextent << "\n";
    return 0;
}