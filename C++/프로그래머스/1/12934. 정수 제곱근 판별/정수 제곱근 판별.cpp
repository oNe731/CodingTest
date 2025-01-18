#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    long long sqrtValue = sqrt(n);
    if (sqrtValue * sqrtValue == n)
    {
        sqrtValue += 1;
        answer = sqrtValue * sqrtValue;
    }
    else
        answer = -1;
            
    return answer;
}