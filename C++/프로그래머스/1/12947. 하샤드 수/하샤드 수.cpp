#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    int Sum = 0;
    int X = x;
    while (X != 0)
    {
        Sum += X % 10;
        X /= 10;
    }

    if (x % Sum == 0)
        answer = true;
    else
        answer = false;
    
    return answer;
}